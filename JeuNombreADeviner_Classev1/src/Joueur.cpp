/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: Joueur.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 05/02/2021
// R�le du fichier: Contient le code des m�thodes du joueur
// Nom des composants utilises:
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;
#include "../include/Joueur.h"

    // Nom :CJoueur  Constructeur
    // R�le : Initialise toutes les informations du joueur.
    //        Le nombre de tentatives, de parties gagn�es et de parties jou�es seront � 0.
    // Param�tre d'entr�e :
    //                  un_nom : le nom du joueur
    // Sortie : le joueur cr��

    CJoueur::CJoueur(string un_nom,string un_prenom)
    {
        this->prenom = un_prenom;
        this->nom = un_nom;
        this->nbPartiesGagnees = 0;
        this->nbPartiesJouees=0;
        this->nbTentatives=0;

        ~CJoueur::CJoueur;
    }




    // Nom : MajResultats
    // R�le : met � jour les informations d'un joueur
    // Param�tres d'entr�e:
    //              - le nombre d'essais
    //              - gagne qui vaut true si le joueur a gagn�, false sinon
    // Entr�e/sortie :
    //              le joueur dont on met � jour les r�sultats


    void CJoueur::MajResultats(int nbEssais, bool gagne)
    {
       this->nbTentatives= this->nbTentatives + nbEssais;

       if (gagne == true)
            this->nbPartiesGagnees ++;

       this->nbPartiesJouees++;
    }

    // Nom : Resultats
    // R�le : indique les r�sultats d'un joueur
    //        le nombre de parties gagn�es, le nombre de parties perdues, le nombre d'essais total
    //        La fonction N'affiche PAS les informations � l'�cran
    // Param�tres de sortie:
    //                      - le nombre de succ�s,
    //                      - le nombre d'�checs
    //                      - le nombre total d'essais
    // Entr�e :
    //            -le joueur dont on veut les r�sultats

    void CJoueur::Resultats(int& nbsucces, int& nbechec, int& nbessais)
    {
        nbsucces = this->nbPartiesGagnees;

        nbechec = this->nbPartiesJouees - this->nbPartiesGagnees;
        nbessais = this->nbTentatives;
    }

    string CJoueur::Prenom()
    {

        return this->prenom;
    }

    // Nom :Nom
    // R�le : retourne le nom du joueur
    // Param�tres d'entr�e: le joueur dont on veut le nom
    // Valeur de retour : nom du joueur
    // Entr�e : le joueur dont on veut le nom

    string CJoueur::Nom()
    {

        return this->nom;
    }



    float CJoueur::Moyenne()
    {
       return this->nbTentatives/this->nbPartiesJouees;
    }



