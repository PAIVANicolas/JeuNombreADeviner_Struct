/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 25/01/2021
// Rôle du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
//                              ctime
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/JeuNombreAdeviner.h"
#include "cstdlib"
#include "ctime"

// Nom :InitJoueur
// Rôle : Crée un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
// Paramètres d'entrée :
// Paramètres de sortie :
// Paramètres d'entrée/sortie :

void InitJoueur(TJoueur& joueurAcreer, string un_nom)
{
    joueurAcreer.nom un_nom;
    joueurAcreer.nbPartiesGagnees = 0;
    joueurAcreer.nbPartiesJouees =0;
    joueurAcreer.nbTentatives =0;


    //A COMPLETER
}


// Nom :TirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre 0 et 10
// Valeur de retour : nombre à deviner

int TirerNombreMystere()
{
    srand (time(NULL));
    TirerNombreMystere = (rand() %10+1)
        return nombreAdeviner;
}


// Nom :JouerPartie
// Rôle : Fait jouer une partie au joueur passé en paramètre
//        A la fin, met à jour les informations du joueur
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void JouerPartie(TJoueur& un_joueur, int nombreADeviner)
{
    int nombre_proproser;
    int i;
    i=0;
    nombre_proproser=0;
    while(i<4){
        i++;
        cout << "Choisir un nombre entre 0 et 10";
        cin >> nombre_proproser;

        if (nombre_proproser == nombreAdeviner)

            cout << "Bien jouer, Tu as gagner";
       {     un_joueur.nbPartiejouees++;
            un_joueur.nbPartieGagnees++;
            un_joueur.nbTentative = un_joueur.nbTentative +i;
            i=6;
        }
        else if (nombre_proproser <= nombreAdeviner)
      {
          cout << "Plus grand";
        }

        else if (nombre_proproser >= nombreADeviner)
        {
            cout << "Plus petit";
        }
}
        if (i==4)
            cout << "Dommage... Tu as perdu :(";
            un_joueur.nbPartiesJouees++;
            un_joueur.nbTentatives = un_joueur.nbTentatives = 4;

// Nom : MajResultatsJoueur
// Rôle : met à jour les informations du joueur passé en paramètre
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void MajResultatsJoueur(TJoueur& joueur, int nbEssais, bool gagne)
{

   // A COMPLETER
}

// Nom : ResultatsJoueur
// Rôle : indique les résultats du joueur passé en paramètre
//        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations à l'écran
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
    // A COMPLETER
}

// Nom :Nom
// Rôle : retourne le nom du joueur
// Paramètres d'entrée: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.nom;
}

