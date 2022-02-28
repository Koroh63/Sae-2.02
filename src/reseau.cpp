#include <iostream>
#include "reseau.hpp"
#include "ville.hpp"

using namespace std;

Reseau::Reseau(string nom) : nom{nom}
{
}

Reseau::Reseau() : nom{"Inconnu"}
{
}


string Reseau::getNom() const{
    return nom;
}


Reseau::~Reseau(){

}

void Reseau::ajouterVille(Ville* ville){
    villeReseau.push_back(ville);
}

void Reseau::afficherVille() const {

    for ( Ville* i : villeReseau ){
        cout << i->getNom() << endl ;
    }
}

void Reseau::initMatriceAccessible() {
    matriceAccessible = {{0,1,1,0},
                        {1,0,0,0},
                        {0,1,0,1},
                        {0,0,0,0}};
}

