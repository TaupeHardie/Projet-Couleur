#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmat.h"
#include "traitement.h"

using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QPixmap pix("C:\\ProjetCouleur\\1.bmp")
    Mat img=imread("C:/ProjetCouleur/images/15.bmp");
    Mat ref=imread("C:/ProjetCouleur/images/101.bmp");
    Traitement test=Traitement(img,ref);
    //cvtColor(img, img, CV_BGR2RGB);
    img=test.pretrait();
    cvtColor(img, img, CV_BGR2RGB);
    ui->image_label->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888)));
}

MainWindow::~MainWindow()
{

    delete ui;
}
