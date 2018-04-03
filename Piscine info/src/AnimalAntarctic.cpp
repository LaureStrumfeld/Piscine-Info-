#include "AnimalAntarctic.h"

using namespace std;


AnimalAntarctic::AnimalAntarctic()
{
    //ctor
}

AnimalAntarctic(string nom): m_nom(nom)
{

}

AnimalAntarctic::~AnimalAntarctic()
{
    //dtor
}

void AnimalAntarctic::AnimalAntarctic(string nom)
{
    ifstream info_AnimalAntarctic("AnimalAntarctic.txt", ios::in);
    info_AnimalAntarctic.seekg(0,ios::bug);
    do
    {
        getline (info_AnimalAntarctic,m_nom);
    }

    while (m_nom!=nom or info_AnimalAntarctic.eof()!=0);
    info_AnimalAntarctic>>m_type;
    info_AnimalAntarctic>>m_description;
    info_AnimalAntarctic>>m_alimentation_nom;
    info_AnimalAntarctic>>m_alimentation_quantite;
    info_AnimalAntarctic>>m_influence;
    info_AnimalAntarctic>>m_rythmeCroissance;

