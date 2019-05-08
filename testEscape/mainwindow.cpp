#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    code.emplace_back(ui->A1widget);
    code.emplace_back(ui->A2widget);
    code.emplace_back(ui->A3widget);
    code.emplace_back(ui->B1widget);
    code.emplace_back(ui->B2widget);
    code.emplace_back(ui->B3widget);
    code.emplace_back(ui->C1widget);
    code.emplace_back(ui->C2widget);
    code.emplace_back(ui->C3widget);

    for(auto caseC:code)
    {
        caseC->resize(200,200);
    }

    //exemples couleurs
    ui->A1widget->attributeColor(Qt::blue);
    ui->A2widget->attributeColor(Qt::black);
    ui->A3widget->attributeColor(Qt::cyan);
    ui->B1widget->attributeColor(Qt::red);
    ui->B2widget->attributeColor(Qt::yellow);
    ui->B3widget->attributeColor(Qt::magenta);
    ui->C1widget->attributeColor(Qt::green);
    ui->C2widget->attributeColor(Qt::gray);
    ui->C3widget->attributeColor(Qt::darkGreen);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionRecommencer_triggered()
{
    ui->A1widget->clear();
    ui->A2widget->clear();
    ui->A3widget->clear();
    ui->B1widget->clear();
    ui->B2widget->clear();
    ui->B3widget->clear();
    ui->C1widget->clear();
    ui->C2widget->clear();
    ui->C3widget->clear();
}

void MainWindow::on_actionOuvrir_image_triggered()
{
    QString imageName = QFileDialog::getOpenFileName(this,
    tr("Ouvrir image"), "",
    tr("Image (*.bmp)"));

    if (imageName != "")
    {
        QPixmap fond;
        fond.load(QApplication::applicationDirPath() + imageName);
        //traitement
        int resultTraitement = QRandomGenerator::global()->bounded(20);//a changer
        if(resultTraitement<9)
        {
            if(!code[resultTraitement]->isRevealed())
            {
            code[resultTraitement]->revealColor();
            ui->resultLabel->setText("Cet objet appartient bien à Théo !");
            }
            else {
                ui->resultLabel->setText("Cet objet a déjà été testé");
            }
        }
        else
        {
           ui->resultLabel->setText("Cet objet n'appartient pas à Théo...");
        }
    }
}
