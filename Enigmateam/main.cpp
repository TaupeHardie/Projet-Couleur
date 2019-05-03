#include "mainwindow.h"
#include "traitement.h"
#include <QApplication>

void main(int argc, char *argv[])
{
    //QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    //return a.exe();
    Mat img=imread("C:\Projet Couleur\1.bmp");
    Mat ref=imread("C:\Projet Couleur\102.bmp");
    Traitement test=Traitement(img,ref);
    img=test.pretrait();
    namedWindow("Display",WINDOW_AUTOSIZE);
    imshow("Display",img);

}
