#include "traitement.h"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"


using namespace cv;

Traitement::Traitement(Mat img,Mat refe)
{
    image=img;
    ref=refe;
}

//Prétraitement
Mat Traitement::pretrait()
{

    Mat crop_img;

    //crop_img=image(Rect(0,0,image.rows,image.cols));
    crop_img=ref-image;
//    Scalar min=new Scalar(20,20,120);
//    Scalar max=new Scalar(255,255,255);
    Mat mask,resulttrait;
    inRange(crop_img, Scalar(10,10,40), Scalar(255,255,255), mask);
//    Mat element = getStructuringElement(MORPH_RECT, Size(2, 2));
//    erode(mask,mask,element);
//    dilate(mask,mask,element);
    bitwise_and(image, image, resulttrait, mask);
    Mat resulthsv;
    cvtColor(resulttrait,resulthsv, COLOR_BGR2HSV);
    // Test dangereux !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    vector<Mat> bgr_planes;
    split( resulthsv, bgr_planes );

      /// Establish the number of bins
    int histSize = 360;

      /// Set the ranges ( for B,G,R) )
    float range[] = { 0, 360 } ;
    const float* histRange = { range };

    bool uniform = true; bool accumulate = false;
    Mat h_hist;
    calcHist( &bgr_planes[0], 1, 0, Mat(), h_hist, 1, &histSize, &histRange, uniform, accumulate );
    //
    int hist_w = 512; int hist_h = 400;
    int bin_w = cvRound( (double) hist_w/histSize );

    Mat histImage( hist_h, hist_w, CV_8UC3, Scalar( 0,0,0) );


    //crop_img=image-ref;
    return resulthsv;
}




//Extraction de caractéristiques

vector<string> Traitement::extract(Mat image)
{
    vector<string> desc;
    return desc;
}

//Classifieur
string *Traitement::classi(vector<string> descrip)
{
    string * etiquette;
    return etiquette;
}
