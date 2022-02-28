#ifndef VILLE_HPP
#define VILLE_HPP
#include <string>
#include <vector>

class Ville {
    private:

        std::string nom;
        std::vector<Ville*> villeAccessible;
        int numero ;

    public:

        Ville(std::string nom,int numero);

        std::string getNom() const ;
        int getNumero() const;

        void ajouterVilleAccessible(Ville* ville);
        void afficherVilleAccessible() const ;

        std::vector<Ville*> getVilleAccessible() const ;

        ~Ville();
        friend std::ostream& operator<<(std::ostream& os,const Ville& ville);
};
#endif
