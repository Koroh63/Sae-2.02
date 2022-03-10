#include <iostream>
#include <algorithm>
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

void Reseau::rechercheLargeur(Ville* villeStart,Ville* villeEnd){
    
    vector<Ville*> chemin ;
    chemin.push_back(villeStart);

    for ( Ville* tmpVille : villeStart->getVilleAccessible()){
        chemin = rechercheRecur(chemin,tmpVille,villeEnd);
    }

    for(Ville* tmp : chemin){
        cout << tmp->getNom() << " -- " ;
    }
    cout << endl; 
}

vector<Ville*> Reseau::rechercheRecur(vector<Ville*> chemin,Ville* villeStart,Ville* villeEnd) const {
    chemin.push_back(villeStart);
    for ( Ville* tmpVille : villeStart->getVilleAccessible()){
        if( tmpVille == villeEnd ){
            chemin.push_back(tmpVille);

            return chemin ;
        }
    }
    chemin.erase(chemin.end()-1);
    return chemin;
}

void Reseau::rechercheDestination(Ville* villeStart){
    vector<Ville*> villeAces ;

    villeAces.push_back(villeStart);

    villeAces = fonction(villeStart->getVilleAccessible(),villeAces,villeStart);

    for(Ville* tmp : villeAces){
        cout << tmp->getNom() << " | " ;
    }
    cout << endl;     
}


vector<Ville*> Reseau::fonction(vector<Ville*> villeDispo,std::vector<Ville*> villeAces,Ville* ville){

    vector<Ville*>::iterator it;

    for(Ville* tmp : villeDispo){
        if ( find(villeAces.begin(),villeAces.end(),tmp) == villeAces.end()){
            villeAces.push_back(tmp);
            return fonction(tmp->getVilleAccessible(),villeAces,tmp);
        }
    }
    return villeAces;
}
