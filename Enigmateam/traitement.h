#ifndef TRAITEMENT_H
#define TRAITEMENT_H
#include <opencv2/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace std;
using namespace cv;


class Traitement
{
public:
    Traitement(Mat img, Mat ref);
    Mat pretrait();
    vector<string> extract(Mat image);
    string * classi(vector<string> descrip );


private:
    Mat image;
    Mat ref;
    Mat image_pt;
    vector<string> desc;
    string etiquette;
};

#endif // TRAITEMENT_H
