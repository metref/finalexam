#include "view.h"
#include <iostream>
#include "value.h"
view::view()
{
    //ctor
}

view::~view()
{
    //dtor
}

void view::menu()
{
    //fonction qui affiche le menu et recupere le choix
    std::cout << "Choose what to calculate " << std::endl;
    std::cout << "1) calculates PMT given n, PV, r" << std::endl;
    std::cout << "2) calculates PV given PMT, n, r " << std::endl;
    std::cout << "3) calculates n given PMT, PV, r " << std::endl;
    std::cout << "4) calculates r given PMT, n, PV " << std::endl;
     //ENTRER
    while ((menu1!=1) && (menu1!=2) && (menu1!=3) && (menu1!=4)) //blindage de l'entrée entre 1 et 4
    {
     std::cout << "Enter" << std::endl;
     std::cin >> this->menu1;
    }


}

void view::formulairePMT()//fonction qui affiche et recupere les infos pour le calcul de PMT
{
    //declaration
    double n=-1;
    double PV=-1;
    double r=-1;;


    //affichage
    std::cout << "1) PMT" << std::endl;


    while ((n<0)) //blindage de l'entrée
    {
        std::cout << "Enter n" << std::endl;
        std::cin >> n;
    }
    while ((PV<0)) //blindage de l'entrée
    {
        std::cout << "Enter PV" << std::endl;
        std::cin >> PV;
    }
    while ((r<0)) //blindage de l'entrée
    {
        std::cout << "Enter r" << std::endl;
        std::cin >> r;
    }

    this->val=value(0,PV,n,r,1); //on alloue notre objet avec le constructeur surchargé


}
void view::formulairePV() //fonction qui affiche et recupere les infos pour le calcul de PV
{
    double n=-1;
    double PMT=-1;;
    double r=-1;;



    std::cout << "2) PV" << std::endl;

     while ((n<0)) //blindage de l'entrée
    {
        std::cout << "Enter n" << std::endl;
        std::cin >> n;
    }
    while ((PMT<0)) //blindage de l'entrée
    {
        std::cout << "Enter PMT" << std::endl;
        std::cin >> PMT;
    }
    while ((r<0)) //blindage de l'entrée
    {
        std::cout << "Enter r" << std::endl;
        std::cin >> r;
    }

    this->val=value(PMT,0,n,r,2);


}
void view::formulairen() //fonction qui affiche et recupere les infos pour le calcul de n
{
    double PV=-1;;
    double PMT=-1;;
    double r=-1;;



    std::cout << "3) n" << std::endl;

    while ((PV<0)) //blindage de l'entrée
    {
        std::cout << "Enter PV" << std::endl;
        std::cin >> PV ;
    }
    while ((PMT<0)) //blindage de l'entrée
    {
        std::cout << "Enter PMT" << std::endl;
        std::cin >> PMT;
    }
    while ((r<0)) //blindage de l'entrée
    {
        std::cout << "Enter r en pourcent" << std::endl;
        std::cin >> r;
    }

    this->val=value(PMT,PV,0,r,3);

}
void view::formulairr() //fonction qui affiche et recupere les infos pour le calcul de n
{
    double PV;
    double PMT;
    double n=-1;



    std::cout << "4) r" << std::endl;

    std::cout << "Enter PV" << std::endl;
    std::cin >> PV ;
    std::cout << "Enter PMT" << std::endl;
    std::cin >> PMT;


    while ((n<0)) //blindage de l'entrée
    {
     std::cout << "Enter n" << std::endl;
     std::cin >> n;
    }

    this->val=value(PMT,PV,n,0,4);

}

value view::formulaire() //fonction qui choisit le formulaire en fonction du menu
{
     switch(this->menu1)
    {
    case 1 :
             formulairePMT();

             break;
    case 2 :
             formulairePV();

             break;
    case 3 :
             formulairen();
             break;
    case 4 :
             formulairr();
             break;
    }


    return (this->val);

}
void view::result(double val) //affichage du resultat
{
    std::cout << "the result is " << val<< std::endl;
}
