#ifndef VILLE_HPP
#define VILLE_HPP
#include <string>

class Ville {
    private:

        std::string nom;
        int nbVilleAccessible;
        Ville** villeAccesible;

    public:

        Ville();
        Ville(std::string nom);
        Ville(std::string nom,int nbVille);

        std::string getNom() const ;
        int getNbVilleAccessible() const ;

        ~Ville();
};



#endif
