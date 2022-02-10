#include <iostream>
#include "ville.hpp"

using namespace std;

Ville::Ville() : nom{"Inconnu"}, nbVilleAccessible{10}
{
    villeAccesible = new Ville*[nbVilleAccessible];
}

Ville::Ville(string nom) : nom{nom}, nbVilleAccessible{10}
{
    villeAccesible = new Ville*[nbVilleAccessible];
}

Ville::Ville(std::string nom,int nbVille) : nom{nom}, nbVilleAccessible{nbVille}
{
    villeAccesible = new Ville*[nbVilleAccessible];
}

string Ville::getNom() const{
    return nom;
}

int Ville::getNbVilleAccessible() const{
    return nbVilleAccessible;
}

Ville::~Ville(){

    delete []villeAccesible;
}
