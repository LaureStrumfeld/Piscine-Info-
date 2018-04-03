#include "AnimalOcean.h"

using namespace std;

AnimalOcean::AnimalOcean()
{
    //ctor
}

AnimalOcean(string nom): m_nom(nom)
{

}


AnimalOcean::~AnimalOcean()
{
    //dtor
}

void AnimalOcean::AnimalOcean(string nom)
{
    ifstream info_AnimalOcean("AnimalOcean.txt", ios::in);
    info_AnimalOcean.seekg(0,ios::bug);
    do
    {
        getline (info_AnimalOcean,m_nom);
    }

    while (m_nom!=nom or info_AnimalOcean.eof()!=0);
    info_AnimalOcean>>m_type;
    info_AnimalOcean>>m_description;
    info_AnimalAntarctic>>m_alimentation_nom;
    info_AnimalAntarctic>>m_alimentation_quantite;
    info_AnimalOcean>>m_influence;

}
