#include <iostream>
#include "revision0.h"
#include <stdlib.h>
#include <cstring>


int menu(){
    cout << "1- ajouter une classe\n";
    cout << "2- afficher les classes\n";
    cout << "3- ajouter un etudiant dans une classe\n";
    cout << "4- lister les etudiants d'une classe\n";
    cout << "5- afficher les classes par ordre croissant\n";
    cout << "6- Quitter\n";
    int a;
    cin >> a;
    return a;
}

CLASSE saisirClasse(int a){
    CLASSE b;
    b.id = a+1;
    cout <<endl <<"saisissez le libelle de la classe" << endl;
    cin.ignore();
    getline(cin, b.libelle);
    cout <<endl <<"quel est l'effectif de la classe?" << endl;
    cin >> b.effectif;

    //cout <<endl <<endl <<"id :" <<b.id <<endl <<"libelle :" <<b.libelle <<endl <<"effectif :" <<b.effectif <<endl;

    return b;
}


void ajouterClasse(CLASSE tabClass[], int nbrClass, CLASSE b){
    tabClass[nbrClass].id = b.id;
    tabClass[nbrClass].effectif = b.effectif;
    tabClass[nbrClass].libelle= "yoga";
    strncpy(tabClass[nbrClass].libelle, b.libelle,20);

    nbrClass++;
}


void afficheTabClasse(CLASSE tabClass[], int nbrClass){

    for(int i(0); i<nbrClass; i++)
       {
          cout <<endl <<"Nom classe: " <<tabClass[i].libelle <<endl;
          cout <<"Classe id: " << tabClass[i].id << endl;
          cout <<"Effectif: " << tabClass[i].effectif << endl <<endl;
       }
}
















