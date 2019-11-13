#include <iostream>
#include "revision0.h"
#include <stdlib.h>

using namespace std;

int main()
{
    vector <CLASSE> tabClass;
    vector <ETUDIANT> tabEtu;


    menu:;
    switch(menu()){
    case 1:
        system("cls");
        cout <<endl << "AJOUT DE CLASSE" <<endl <<endl;

        //ajouterClasse(tabClass, saisirClasse(tabClass.size()));
        tabClass.push_back(saisirClasse(tabClass.size()));

        system("pause");
        system("cls");
        goto menu;
        break;
    case 2:
        system("cls");
        cout <<endl << "AFFICHAGE DES CLASSES" <<endl <<endl;

        afficheTabClasse(tabClass);

        system("pause");
        system("cls");
        goto menu;
        break;
    case 3:
        system("cls");

        cout <<endl << "AJOUT D'ETUDIANT" <<endl <<endl;

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
