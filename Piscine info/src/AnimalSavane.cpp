#include "AnimalSavane.h"

using namespace std;

AnimalSavane::AnimalSavane()
{
    //ctor
}

AnimalSavane(string nom): m_nom(nom)
{

}


AnimalSavane::~AnimalSavane()
{
    //dtor
}

void AnimalSavane::AnimalSavane(string nom)
{
    ifstream info_AnimalSavane("AnimalSavane.txt", ios::in);
    info_AnimalSavane.seekg(0,ios::bug);
    do
    {
        getline (info_AnimalSavane,m_nom);
    }

    while (m_nom!=nom or info_AnimalSavane.eof()!=0);
    info_AnimalSavane>>m_type;
    info_AnimalSavane>>m_description;
    info_AnimalAntarctic>>m_alimentation_nom;
    info_AnimalAntarctic>>m_alimentation_quantite;
    info_AnimalSavane>>m_influence;
