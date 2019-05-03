#include "traitement.h"

Traitement::Traitement(Mat img,Mat refe)
{
    image=img;
    ref=refe;
}

//Prétraitement
Mat Traitement::pretrait()
{
    Mat crop_img;
    //crop_img=image(Rect(13,20,image.rows,image.cols));
    //crop_img=image-ref;
    return image;
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
