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

        ~Reseau();
};

#endif
