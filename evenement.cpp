#include "evenement.h"


evenement::evenement()
{
    nom="";
    description="";
    lieu="";
    datedebut=QDate();
    datefin=QDate();
    prixentre=0;
    type="";

}


void evenement::set_nom(QString n){nom=n;}
void evenement::set_description(QString n){description=n;}
void evenement::set_lieu(QString n){lieu=n;}
void evenement::set_datedebut(QDate n){datedebut=n;}
void evenement::set_datefin(QDate n){datefin=n;}
void evenement::set_prixentre(double n){prixentre=n;}
void evenement::set_type(QString n){type=n;}



QString evenement::get_nom(){return nom;}
QString evenement::get_description(){return description;}
QString evenement::get_lieu(){return lieu;}
QDate evenement::get_datedebut(){return datedebut;}
QDate evenement::get_datefin(){return datefin;}
double evenement::get_prixentre(){return prixentre;}
QString evenement::get_type(){return type;}
