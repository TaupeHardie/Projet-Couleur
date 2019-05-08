#include "mainwindow.h"
#include "traitement.h"
#include <QApplication>
#include "qmat.h"

using namespace cv;

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    QMat qmat(imread("C:\\ProjetCouleur\\1.bmp"));

//    qmat.show();//ne pas oublier sinon pas d'affichage

    //return a.exec();
    //MainWindow w;
    //w.show();

    //return a.exe();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
//    Mat img=imread("C:\\ProjetCouleur\\1.bmp",CV_LOAD_IMAGE_COLOR);
//    cvtColor(img, img, CV_BGR2RGB);
//    ui->image_lbl->setPixmap(QPixmap::fromImage(QImage(img.data, img.cols, img.rows, img.step, QImage::Format_RGB888)));
    return a.exec();
//    Mat ref=imread("C:\\ProjetCouleur\\102.bmp",CV_LOAD_IMAGE_COLOR);
//    Traitement test=Traitement(img,ref);
//    img=test.pretrait();
//    namedWindow("Display",WINDOW_AUTOSIZE);
//    imshow("Display",img);

}
