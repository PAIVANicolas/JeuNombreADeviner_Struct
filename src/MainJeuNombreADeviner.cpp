/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: Nicolas PAIVA
// Date de cr�ation : 25/01/2021
// R�le du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
// Historique du fichier:
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
    cout << "Tu dois deviner le num�ro myst�re" << endl;
    cout << "Quel sera ton nom ?" << endl;
    cin >> un_nom;
    InitJoueur(joueurAcreer, un_nom);
    JouerPartie(joueurAcreer, TirerNombreMystere());
    MajResultatsJoueur(joueurAcreer, joueurAcreer.nbTentatives, joueurAcreer.nbPartiesGagnees);
    ResultatsJoueur(joueurAcreer, joueurAcreer.nbPartiesGagnees, joueurAcreer.nbPartiesPerdues, joueurAcreer.nbTentatives);
    cout << "Tu as mis " << joueurAcreer.nbTentatives << " tentatives, tu as reussi " << joueurAcreer.nbPartiesGagnees << " parties, et tu as perdu " << joueurAcreer.nbPartiesPerdues << " parties.";
    return 0;
}

