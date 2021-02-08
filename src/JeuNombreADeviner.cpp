/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: Nicolas PAIVA
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
#include <cstdlib>
#include <ctime>

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
    joueurAcreer.nbPartiesPerdues = 0;
}


// Nom :TirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre 0 et 10
// Valeur de retour : nombre à deviner

int TirerNombreMystere()
{
   srand((int)time(0));
    int nombreADeviner = (rand() % 10+1);
	return nombreADeviner;
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
    while(i<4)
        {
        i++;
        cout << "Choisir un nombre entre 0 et 10";
        cin >> nombre_proproser;
        if (nombre_proproser == nombreAdeviner)
        {

            cout << "Bien jouer, Tu as gagner";
            MajResultatsJoueur(un_joueur, i, true);
            i=6;
        }
        else if (nombre_proproser <= nombreAdeviner)
        {
          cout << "Plus grand";
          i++;
        }

        else if (nombre_proproser >= nombreADeviner)
        {
            cout << "Plus petit";
            i++;
        }
        }
        if (i==4)
        {
            cout << "Dommage... Tu as perdu :(";
             MajResultatsJoueur(un_joueur, 4, false);
        }
}

// Nom : MajResultatsJoueur
// Rôle : met à jour les informations du joueur passé en paramètre
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void MajResultatsJoueur(TJoueur& joueur, int nbEssais, bool gagne)
{
    un_joueur.nbPartiesJouees++;
    un_joueur.nbTentatives = nbEssais + un_joueur.nbTentatives;
    if (gagne==true) un_joueur.nbPartiesGagnees++;
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
    nbsucces = joueur.nbPartiesGagnees/2;
    nbechec = (joueur.nbPartiesJouees - joueur.nbPartiesGagnees)/2;
    nbessais = joueur.nbTentatives/2;
}

// Nom :Nom
// Rôle : retourne le nom du joueur
// Paramètres d'entrée: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.nom;
}

