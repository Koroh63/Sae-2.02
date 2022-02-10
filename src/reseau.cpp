#include <iostream>
#include "reseau.hpp"

using namespace std;

Reseau::Reseau(string nom,int nbVille) : nom{nom}, nbVille{nbVille} 
{
    villeReseau = new Ville[nbVille];
}

Reseau::Reseau() : nom{"Inconnu"}, nbVille{10} 
{
    villeReseau = new Ville[nbVille];
}

Reseau::Reseau(string nom) : nom{nom}, nbVille{10} 
{
    villeReseau = new Ville[nbVille];
}



string Reseau::getNom() const{
    return nom;
}

int Reseau::getNbVille() const{
    return nbVille;
}

Reseau::~Reseau(){

    
    delete [] villeReseau;

}