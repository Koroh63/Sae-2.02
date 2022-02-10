#ifndef RESEAU_HPP
#define RESEAU_HPP
#include <string>
#include "ville.hpp"

class Reseau{
    private:
        std::string nom;
        int nbVille;
        Ville* villeReseau;

    public:
        Reseau();
        Reseau(std::string nom);
        Reseau(std::string nom,int nbVille);
        
        std::string getNom() const ;
        int getNbVille() const;

        ~Reseau();
};




#endif