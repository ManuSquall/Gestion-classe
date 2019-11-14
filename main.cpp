#include <iostream>
#include "revision0.h"
#include <stdlib.h>

using namespace std;

int main()
{
    const int tailleTabClass = 25;
    CLASSE tabClass[tailleTabClass];
    int nbrClass = 0;

    const int tailleTabEtu = 30;
    ETUDIANT tabEtu[tailleTabEtu];
    int nbrEtu = 0;


    menu:;
    switch(menu()){
    case 1:
        system("cls");
        cout <<endl << "AJOUT DE CLASSE" <<endl <<endl;

        ajouterClasse(tabClass, nbrClass, saisirClasse(nbrClass));

        system("pause");
        system("cls");
        goto menu;
        break;
    case 2:
        system("cls");
        cout <<endl << "AFFICHAGE DES CLASSES" <<endl <<endl;

        afficheTabClasse(tabClass, nbrClass);

        system("pause");
        system("cls");
        goto menu;
        break;
    case 3:
        system("cls");
        cout <<endl << "AJOUT D'ETUDIANT" <<endl <<endl;

        //tabEtu.push_back(saisirEtudiant(tabEtu.size()));

        system("pause");
        system("cls");
        goto menu;
        break;
    case 4:
        system("cls");
        cout << "case 4" <<endl;
        system("pause");
        system("cls");
        goto menu;
        break;
    case 5:
        system("cls");
        cout << "case 5" <<endl;
        system("pause");
        system("cls");
        goto menu;
        break;
    case 6:
        system("cls");
        return 0;
        break;
    }

    return 0;
}
