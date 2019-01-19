#ifndef VIEW_H
#define VIEW_H
#include "value.h"

class view
{
    public:
        view(); //contructeur par default
        ~view();//destructeur

        void menu(); //affichage menu
        void result(double val); //affichage resultat

        //formulaires

        void formulairePMT();
        void formulairePV();
        void formulairen();
        void formulairr();

        //choose formulaire
        value formulaire();


    private : //attribut privée
        value val;
        int menu1=0;

};

#endif // VIEW_H
