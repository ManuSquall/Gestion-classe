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
void ajouterClasse(CLASSE tabClass[], int nbrClass, CLASSE);
void afficheClasse(CLASSE cl);
void afficheTabClasse(CLASSE tabClass[], int nbrClass);
int menu();

ETUDIANT saisirEtudiant(int);
void ajouterEtudiant(vector<ETUDIANT>, ETUDIANT);
void afficherEtudiantParClasse(string);






#endif // REVISION0_H_INCLUDED
