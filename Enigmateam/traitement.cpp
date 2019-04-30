#include "traitement.h"

Traitement::Traitement()
{

}

//Prétraitement
Mat Traitement::pretrait(Mat image)
{
    Mat image_pt;
    return image_pt;
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
