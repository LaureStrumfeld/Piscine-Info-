#ifndef ANIMALOCEAN_H
#define ANIMALOCEAN_H
#include "string"


class AnimalOcean
{
    public:
        AnimalOcean(); //constructeur par default
        AnimalOcean(std::string nom); //constructeur surcharg�
        void AnimalOcean(std::string nom);

    protected:

    private:
        string m_nom;
};

#endif // ANIMALOCEAN_H
