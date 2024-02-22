#ifndef EVENEMENT_H
#define EVENEMENT_H
#include <QString>
#include <QDate>

class evenement
{
public:

    void set_nom(QString n);
    void set_description(QString n);
    void set_lieu(QString n);
    void set_datedebut(QDate n);
    void set_datefin(QDate n);
    void set_prixentre(double n);
    void set_type(QString n);


    QString get_nom();
    QString get_description();
    QString get_lieu();
    QDate get_datedebut();
    QDate get_datefin();
    double get_prixentre();
    QString get_type();

    evenement();

private:
    QString nom;
    QString description;
    QString lieu;
    QDate datedebut;
    QDate datefin;
    double prixentre;
    QString type;
};

#endif // EVENEMENT_H
