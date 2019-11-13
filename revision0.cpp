#include <iostream>
#include "revision0.h"


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

//void ajouterClasse(vector<CLASSE> a, CLASSE b){
//    a.push_back(b);
//    cout <<endl <<a.size() <<endl ;
//    cout <<endl <<"La classe " <<b.libelle <<" a bien ete ajoutee" <<endl;
//}


void afficheTabClasse(vector<CLASSE> a){
    //cout <<a.size();
    for(int i(0); i<a.size(); i++)
       {
          cout <<endl <<"Nom classe: " <<a[i].libelle <<endl;
          cout <<"Classe id: " << a[i].id << endl;
          cout <<"Effectif: " << a[i].effectif << endl <<endl;
       }
}
















