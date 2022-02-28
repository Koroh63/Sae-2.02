#include <iostream>
#include "ville.hpp"
#include "reseau.hpp"

using namespace std;

int main(){
    
    Reseau reseau{"France"};

    Ville addis{"Addis-Abeba",1};
    Ville bogota{"Bogota",2};
    Ville doha{"Doha",3};
    Ville copenhague{"Copenhague",4};

    reseau.initMatriceAccessible();

    reseau.ajouterVille(&addis);
    reseau.ajouterVille(&bogota);
    reseau.ajouterVille(&doha);
    reseau.ajouterVille(&copenhague);

    addis.ajouterVilleAccessible(&bogota);
    addis.ajouterVilleAccessible(&doha);
    
    bogota.ajouterVilleAccessible(&addis);
    
    doha.ajouterVilleAccessible(&bogota);
    doha.ajouterVilleAccessible(&copenhague);

    cout << addis << endl;
    cout << bogota << endl;
    cout << doha << endl;
    cout << copenhague << endl;

    return 0;
}
