/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: Nicolas PAIVA
// Date de cr�ation : 25/01/2021
// R�le du fichier: Contient le code des fonctions du jeu
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
// R�le : Cr�e un joueur. Initialise toutes les informations du joueur.
//        Le nombre de tentatives, de parties gagn�es et de parties jou�es seront � 0.
// Param�tres d'entr�e :
// Param�tres de sortie :
// Param�tres d'entr�e/sortie :

void InitJoueur(TJoueur& joueurAcreer, string un_nom)
{
    joueurAcreer.nom un_nom;
    joueurAcreer.nbPartiesGagnees = 0;
    joueurAcreer.nbPartiesJouees =0;
    joueurAcreer.nbTentatives =0;
    joueurAcreer.nbPartiesPerdues = 0;
}


// Nom :TirerNombreMystere
// R�le : Tire al�atoirement un nombre � deviner entre 0 et 10
// Valeur de retour : nombre � deviner

int TirerNombreMystere()
{
   srand((int)time(0));
    int nombreADeviner = (rand() % 10+1);
	return nombreADeviner;
}


// Nom :JouerPartie
// R�le : Fait jouer une partie au joueur pass� en param�tre
//        A la fin, met � jour les informations du joueur
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

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
// R�le : met � jour les informations du joueur pass� en param�tre
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

void MajResultatsJoueur(TJoueur& joueur, int nbEssais, bool gagne)
{
    un_joueur.nbPartiesJouees++;
    un_joueur.nbTentatives = nbEssais + un_joueur.nbTentatives;
    if (gagne==true) un_joueur.nbPartiesGagnees++;
}

// Nom : ResultatsJoueur
// R�le : indique les r�sultats du joueur pass� en param�tre
//        le nombre de parties gagn�es, le nombre de parties perdues, le nombre d'essais total
//        La fonction N'affiche PAS les informations � l'�cran
// Param�tres d'entr�e:
// Param�tres de sortie:
// Param�tres d'entr�e/sortie :

void ResultatsJoueur(TJoueur joueur, int& nbsucces, int& nbechec, int& nbessais)
{
    nbsucces = joueur.nbPartiesGagnees/2;
    nbechec = (joueur.nbPartiesJouees - joueur.nbPartiesGagnees)/2;
    nbessais = joueur.nbTentatives/2;
}

// Nom :Nom
// R�le : retourne le nom du joueur
// Param�tres d'entr�e: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur){

    return joueur.nom;
}

