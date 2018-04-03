#ifndef ANIMALANTARCTIC_H
#define ANIMALANTARCTIC_H
#include "string"
#include <iostream>

class AnimalAntarctic
{
    public:
        AnimalAntarctic(); //constructeur par default
        AnimalAntarctic(std::string nom); //constructeur surcharge
        void AnimalAntarctic(std::string nom);

    protected:

    private:
        std::string m_nom;

};


#endif // ANIMALANTARCTIC_H
