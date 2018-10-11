#include <iostream>
#include <string>
#include "hash.h"

int hash1::nombreItems(int index){
    int nbItem =0;
    if (HashTable[index]->nom == "vide"){
        return nbItem;
    }
    else {
        nbItem ++;
        item* ptr = HashTable[index];
        while (ptr->next!=NULL){
            nbItem ++;
            ptr= ptr->next;
        }
    return nbItem;
    }

}
void hash1::ajouterItem(string nom, string adresse, string tel){
    int index = Hash(nom);
    int nbitem = 0;
    if (HashTable[index]->nom == "vide"){
        HashTable[index]->nom = nom;
        HashTable[index]->adresse = adresse;
        HashTable[index]->tel = tel;
    }
    else{
        nbitem++;
        item* ptr = HashTable[index];
        while (ptr->next != NULL){
            nbitem ++;
            ptr = ptr->next;
        }
    }

}

 hash1::hash1(){
    for(int i=0; i< tailleTableau; i++){
        HashTable[i]->nom = "vide";
        HashTable[i]->adresse = "vide";
        HashTable[i]->tel = "vide";
        HashTable[i]->next = NULL;

    }
 }

int hash1::Hash(string cle){
    int hashage = 0;
    int index;

    index = cle.length();

    for(int i=0; i<cle.length(); i++){
        hashage = hashage + (int)cle[i];
    }

    cout << "l index [0] = " << (int)cle[0] << endl;
    cout << "l index [1] = " << (int)cle[1] << endl;
    cout << "l index [2] = " << (int)cle[2] << endl;
    cout << "hashage = "  << hashage << endl;
    index = hashage % tailleTableau;
    cout << "index final = " << index << endl;

    return index;

}
