#ifndef REVISION0_H_INCLUDED
#define REVISION0_H_INCLUDED
#include <string>
#include <vector>

using namespace std;

struct CLASSE{
    int id;
    string libelle;
    int effectif;
};

struct ETUDIANT{
    int id;
    string nom;
    string prenom;
    int age;
    CLASSE cl;
};

//  prototypes
CLASSE saisirClasse(int);
void ajouterClasse(vector<CLASSE>, CLASSE);
void afficheClasse(CLASSE cl);
void afficheTabClasse(vector<CLASSE>);
int menu();
void goMenu();
void cls();






#endif // REVISION0_H_INCLUDED
