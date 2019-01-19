#include <iostream>
#include "view.h"
#include "value.h"

//using namespace std;

int main()
{
    //declaration

    view view1; //objet de classe view qui gere l'interface avec l'utilisateur (saisie, affichage)
    value val; //objet de classe value qui a nos valeurs
    double result;//double qui recupere notre resultat


    //affichage menu et choix du calcul souhaité
    view1.menu();

    //formulaire qui recupere les values
    val=view1.formulaire();

    //calcul souhaité
    result=val.compute();


    //affichage valeur calculé
    view1.result(result);


    return 0;
}
