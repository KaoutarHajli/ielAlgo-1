#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int main(){

    hash1 haT;  // instancier la classe hash1
    //haT.Hash("iel");
    //-----------------------------
    // ajouter quelques elements
    haT.ajouterItem("Mohamed", "11 Rue Marrakesh", "05634333");
    haT.ajouterItem("Youness", "Rabat", "05370012");
    haT.ajouterItem("Ali",     "Agadir", "43243264");
    haT.ajouterItem("Bard",    "Ifrane", "05611298");
    haT.ajouterItem("yahya",   "Casa", "05345545");
    haT.ajouterItem("Fatima",  "Oujda", "43243264");
    haT.ajouterItem("Noureddine",  "Khouribga", "53422343");
    //-----------------------------

    haT.afficherItems();


    return 0;
}
