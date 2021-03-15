/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP PINAUD, PAIVA Nicolas
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
// Historique du fichier: Codage du main.
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/JeuNombreADeviner.h"
#include "cstdlib"
#include "ctime"


int main()
{
    string un_nom;
    TJoueur joueurAcreer;
    cout << "Tu devras deviner le nombre mystere." << endl;
    cout << "Quel sera ton nom ?" << endl;
    cin >> un_nom;
    InitJoueur(joueurAcreer, un_nom);
    JouerPartie(joueurAcreer, TirerNombreMystere());
    MajResultatsJoueur(joueurAcreer, joueurAcreer.nbTentatives, joueurAcreer.nbPartiesGagnees);
    ResultatsJoueur(joueurAcreer, joueurAcreer.nbPartiesGagnees, joueurAcreer.nbPartiesPerdues, joueurAcreer.nbTentatives);
    cout << "Nombres de Tentatives " << joueurAcreer.nbTentatives <<endl;
    cout << "Nombres de Succees : " << joueurAcreer.nbPartiesGagnees <<endl;
    cout << "Nombres de Echec : " << joueurAcreer.nbPartiesPerdues;
    return 0;
}

