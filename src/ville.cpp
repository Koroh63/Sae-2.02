#include <iostream>
#include "ville.hpp"

using namespace std;



Ville::Ville(string nom,int numero) : nom{nom}, numero{numero}
{
}

string Ville::getNom() const{
    return nom;
}

Ville::~Ville(){

}

void Ville::ajouterVilleAccessible(Ville* ville){
    villeAccessible.push_back(ville);
}

void Ville::afficherVilleAccessible() const {
    for ( Ville* i : villeAccessible ){
        cout << i->getNom() << endl ;
    }
}

ostream & operator<<(ostream& os,const Ville& ville){

    os << ville.getNom() << " ( Ville accessible : " ;

    for ( int i = 0 ; i < int(ville.villeAccessible.size()) ; i++ ){
        cout << ville.villeAccessible[i]->getNom()  << ", ";
    }
    cout << ") ";
    return os ;
}

vector<Ville*> Ville::getVilleAccessible() const {
    return villeAccessible;
}

int Ville::getNumero() const {
    return numero;
}
