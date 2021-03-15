/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: Joueur.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud et PAIVA Nicolas
// Date de création : 05/02/2021
// R�le du fichier: Contient le code des méthodes du joueur
// Nom des composants utilises:
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/Joueur.h"

    // Nom :CJoueur  Constructeur
    // Rôle : Initialise toutes les informations du joueur.
    //        Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.
    // Paramètre d'entr�e :
    //                  un_nom : le nom du joueur
    // Sortie : le joueur créé

    CJoueur::CJoueur(string un_nom,string un_prenom)
    {
        this->prenom = un_prenom;
        this->nom = un_nom;
        this->nbPartiesGagnees = 0;
        this->nbPartiesJouees=0;
        this->nbTentatives=0;

    }




    // Nom : MajResultats
    // Rôle : met à jour les informations d'un joueur
    // Paramètres d'entrée:
    //              - le nombre d'essais
    //              - gagne qui vaut true si le joueur a gagné, false sinon
    // Entrée/sortie :
    //              le joueur dont on met à jour les résultats


    void CJoueur::MajResultats(int nbEssais, bool gagne)
    {
       this->nbTentatives= this->nbTentatives + nbEssais;

       if (gagne == true)
            this->nbPartiesGagnees ++;

       this->nbPartiesJouees++;
    }

    // Nom : Resultats
    // Rôle : indique les résultats d'un joueur
    //        le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
    //        La fonction N'affiche PAS les informations à l'écran
    // Paramètres de sortie:
    //                      - le nombre de succés,
    //                      - le nombre d'échecs
    //                      - le nombre total d'essais
    // Entrée :
    //            -le joueur dont on veut les résultats

    void CJoueur::Resultats(int& nbsucces, int& nbechec, int& nbessais)
    {
        nbsucces = this->nbPartiesGagnees;

        nbechec = this->nbPartiesJouees - this->nbPartiesGagnees;
        nbessais = this->nbTentatives;
    }


    // Nom : Descruteur

    CJoueur::~CJoueur()
    {
        cout << "le joueur de nom " << this->nom << "et d'adresse " << this << "va etre détruit" << endl;
    }




    // Nom :Prenom
    // Réle : retourne le prenom du joueur
    // Paramétres d'entrée: le joueur dont on veut le prenom
    // Valeur de retour : prenom du joueur
    // Entrée : le joueur dont on veut le prenom

    string CJoueur::Prenom()
    {

        return this->prenom;
    }

    // Nom :Nom
    // Rôle : retourne le nom du joueur
    // Paramétres d'entrée: le joueur dont on veut le nom
    // Valeur de retour : nom du joueur
    // Entrée : le joueur dont on veut le nom

    string CJoueur::Nom()
    {

        return this->nom;
    }



    float CJoueur::Moyenne()
    {
       return this->nbTentatives/this->nbPartiesJouees;
    }



