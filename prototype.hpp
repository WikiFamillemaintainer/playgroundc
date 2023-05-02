#include "math.hpp"
#ifndef MATH_HPP_INCLUDED
#define MATH_HPP_INCLUDED
int ajouteDeux(int nombreRecu);
#endif // MATH_HPP_INCLUDED
#include <iostream>

using namespace std;



   



// Main
int main()
    ofstream monFlux("C:/Nanoc/scores.txt");  //On essaye d'ouvrir le fichier

if(monFlux)  //On teste si tout est OK
{
    //Tout est OK, on peut utiliser le fichier
}
else
{
    cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
}
   //Déclaration d'un flux permettant d'écrire dans le fichier
   // C:/Nanoc/scores.txt
   return 0;
// Prototype avec les valeurs par défaut
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);
// Prototype avec les valeurs par défaut
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);
// Prototype avec les valeurs par défaut
int nombreDeSecondes(int heures, int minutes = 0, int secondes = 0);

{
    cout << nombreDeSecondes(1, 10, 25) << endl;

    return 0;
}

// Définition de la fonction, SANS les valeurs par défaut
int nombreDeSecondes(int heures, int minutes, int secondes)
{
    int total = 0;

    total = heures * 60 * 60;
    total += minutes * 60;
    total += secondes;

    return total;
}
