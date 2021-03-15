/*************************************************/
// Nom du projet: Jeu du nombre � deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de cr�ation : 05/02/2021
// R�le du fichier: Contient le code jeu
// Nom des composants utilises: CPartie
//                              CJoueur
//                              iostream
// Historique du fichier:
/*************************************************/
#include <iostream>
using namespace std;

#include "../include/Partie.h"

int main()
{
    //Création d'un joueur
    cout << "Vous allez jouer pour deviner un nombre secret" << endl;
    cout << "----------------------------------------------"<< endl;
    cout << "Veuillez entrer votre Prenom" << endl;
    string un_prenom;
    string un_nom;
    cin >> un_prenom;
    cout << "Veuillez entrer votre Nom"<< endl;
    cin >> un_nom;

    // Création du joueur 1
    CJoueur joueur (un_nom, un_prenom);

    // Création du joueur 2
    cout << "veuillez entre le Prenom du 2eme joueur" <<endl;
    string un_prenom2;
    string un_nom2;
    cin >> un_prenom2;
    cout << "veuillez entre le Nom du 2eme joueur" <<endl;
    cin >> un_nom2;

    CJoueur joueur2 (un_nom2, un_prenom2);

 /*
void ajouterJoueur(int nombreJoueur, string nomJoueur)
{
    vector <Personnage> joueurs;
    string nomPersonnage;

    for(int i(0); i < nombreJoueur; i++)
    {
        cout << "Quel est le nom du premier joueur?" << endl;
        cin >> nomPersonnage;
        Personnage (nomPersonnage) = joueurs[i];

    }
}*/

    cout << "----------------------------------------------"<< endl;
    cout << "Combien de parties voulez-vous jouer ?" << endl;
    int nbParties;
    cin >> nbParties;

    for (int i = 0; i <nbParties; i++)
    {
        cout << "----------------------------------------------"<< endl;
        cout <<"Partie Numero : " << i+1 << endl;
        cout << "----------------------------------------------"<< endl;

        CPartie partie (0,10,4); // nombre à deviner entre 0 et 10, nombre de tentatives maximum 4

        partie.Jouer(joueur); // exécution d'une partie pour le joueur
        partie.Jouer(joueur2); //ex&cution d'une partie pour le joueur
    }

    cout << "----------------------------------------------"<< endl;
    cout << "Affichage des resultats du joueur "<< joueur.Prenom() <<" " << joueur.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // R�cup�ration des r�sultats du joueur 1
    int nbsucces, nbechecs, nbessais;
    joueur.Resultats(nbsucces, nbechecs, nbessais);  // les param�tres sont pass�s par r�f�rence

    // Affichage des r�sultats joueur 1
    cout << "Nombre de parties gagnees : " << nbsucces << endl;
    cout << "Nombre de parties perdues : " << nbechecs << endl;
    cout << "Nombre de tentatives totales : " << nbessais << endl;
    cout << "----------------------------------------------"<< endl;

     // R�cup�ration des résultats du joueur 2
    int nbsucces2, nbechecs2, nbessais2;

    joueur2.Resultats(nbsucces2, nbechecs2, nbessais2);   // les paramétres sont passés par référence

    cout << "----------------------------------------------"<< endl;
    cout << "Affichage des resultats du joueur "<< joueur2.Prenom() <<" "<< joueur2.Nom() << endl;
    cout << "----------------------------------------------"<< endl;

    // Affichage des résultats joueur 2

    cout << "Nombre de parties gagnees : " << nbsucces2 << endl;
    cout << "Nombre de parties perdues : " << nbechecs2 << endl;
    cout << "Nombre de tentatives totales : " << nbessais2 << endl;
    cout << "----------------------------------------------" << endl;

    // Indiquer quel joueur a gagné

    if (nbsucces2 > nbsucces)
        cout << joueur2.Nom() << "a gagne" <<endl;
    else if (nbsucces2 > nbsucces)
        cout << joueur.Nom() << "a gagne" <<endl;
    else
        cout << joueur.Nom() << " et " << joueur2.Prenom() <<" " << joueur2.Nom() <<" sont a egalite" <<endl;

    //Créer un 3ème joueur Dynamiquement

    CJoueur * joueur3 ;
    joueur3= new CJoueur("PAIVA","Dimitri");

    // Créer une partie dynamiquement (nombre à trouver entre 1 et 10, 3 essais max)
    CPartie * partie2 ;
    partie2 = new CPartie (1,10,3);

    //Exécuter la partie pour le 3ème joueur.

    partie2 ->Jouer(*joueur3);

    //Afficher les résultats du 3ème joueur.

    int nbsucces3, nbechecs3, nbessais3;

    joueur3->Resultats(nbsucces3, nbechecs3, nbessais3);

     cout << "Nombre de parties gagnees : " << nbsucces3 << endl;
    cout << "Nombre de parties perdues : " <<  nbechecs3 << endl;
    cout << "Nombre de tentatives totales : " << nbessais3 << endl;
    cout << "----------------------------------------------"<< endl;

    cout << "Moyenne de " << joueur.Prenom() <<" " << joueur.Nom() << " et de "  << joueur.Moyenne() <<endl;
    cout << "Moyenne de " << joueur2.Prenom() <<" " << joueur2.Nom() << " et de "  << joueur2.Moyenne() <<endl;
    cout << "Moyenne de " << joueur3->Prenom() <<" " << joueur3->Nom() << " et de "  << joueur3->Moyenne() <<endl;

    return 0;
}



