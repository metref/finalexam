#include "value.h"
#include<cmath>
#include<math.h>
#include <stdlib.h>



value::value()
{
}
value::value(double PMT1,double PV1,int n1,double r1, int menu1)
{
    //allocation de notre objet avec les parametres
    this->PMT=PMT1;
    this->PV=PV1;
    this->n=n1;
    this->r=r1/100; //nous avons des pourcents
    this->menu=menu1;
    //ctor
}

value::~value()
{
    //dtor
}

float value::compute()
{
    //fonction qui execute les calculs
    //declaration
    double val;

    //en fonction du menu
    switch(this->menu)
    {
    case 1 :

            //calcul PMT
             val=(this->PV)*(this->r)*(1+(1/(pow((1+(this->r)),(this->n))-1)));
             break;

    case 2 :

            //calcul PV
             val=PMT/(r*(1+(1/(pow((1+r),n)-1))));
             break;


    case 3 :

            //calcul n
             val=log(PMT)-log(PMT-(r*PV));
             val=val/log(1+r);
             break;
    case 4 :
        val=opti();
        break;
    }


    return val;
}
 double value::opti()
 {
    //declaration
    double r1;
    double temp;
    double temp2;
    double val;
    //initialisation
    r1=0.00;
    temp2=PMT/((r1)*(1+(1/(pow((1+(r1)),(this->n))-1))));
    //calcul
    while ((PV!=temp) && (r1<=0.1))
        {
           temp=PMT/((r1)*(1+(1/(pow((1+(r1)),(this->n))-1))));
           r1=r1+0.0001;

           if (std::abs(temp-PV) <= std::abs(temp2-PV))
           {
               val=r1;
           }
           temp2=temp;



        }
        return val*100;
 }
