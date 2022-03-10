#ifndef RESEAU_HPP
#define RESEAU_HPP
#include <string>
#include <vector>

class Ville;

class Reseau{
    private:
        std::string nom;
        std::vector<Ville*> villeReseau;
        std::vector<std::vector<int>> matriceAccessible ; 

    public:
        Reseau();
        Reseau(std::string nom);
        
        std::string getNom() const ;

        void ajouterVille(Ville* ville);
        void afficherVille() const ;

        void initMatriceAccessible();
        
        void rechercheLargeur(Ville* villeStart,Ville* villeEnd);
        std::vector<Ville*> rechercheRecur(std::vector<Ville*> chemin,Ville* villeStart,Ville* villeEnd) const ;
        void rechercheDestination(Ville* villeStart);
        std::vector<Ville*> fonction(std::vector<Ville*> villeDispo,std::vector<Ville*> villeAces,Ville* ville);

        ~Reseau();
};

#endif
