#ifndef VALUE_H
#define VALUE_H


class value
{
    public:
        //constructeur
        value();
        //constructeur surchargé
        value(double PMT,double PV,int n,double r,int menu1);
        //destructeur
        ~value();
        //calcul
        float compute();

        //optimisation algorithm
        double opti();

    //attribut privée
    private:

        double PMT;
        double PV;
        int n;
        double r;
        int menu; //menu

};

#endif // VALUE_H
