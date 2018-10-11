#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

void hash1::afficherItems(){
    int compteurItem =0;
    for(int i=0; i < tailleTableau; i++){
        compteurItem = nombreItems(i); // utiliser la methode nombreItems pour retourner le total
        cout <<"-------------\n";
        cout << "index = "  << i        << endl;
        cout << HashTable[i]->nom       << endl;
        cout << HashTable[i]->adresse   << endl;
        cout << HashTable[i]->tel       << endl;
        cout << " # des items = " << compteurItem << endl;
        cout <<"-------------\n";
    }
}
// retourner le nombre d elements du tableau
int hash1::nombreItems(int index){
    int nbItem =0;
    if (HashTable[index]->nom == "vide"){
        return nbItem;
    }
    else {
        nbItem ++;
        item* ptr = HashTable[index];
        while (ptr->next != NULL){
            nbItem ++;
            ptr = ptr->next;
        }
    return nbItem;
    }
}
int hash1::ajouterItem(string nom, string adresse, string tel){
    int index = Hash(nom);
    if (HashTable[index]->nom == "vide"){
        // la case est vide, placer element
        HashTable[index]->nom = nom;
        HashTable[index]->adresse = adresse;
        HashTable[index]->tel = tel;
        HashTable[index]->next = NULL;
    }
    else{
        item* ptr = HashTable[index];
        item* nouv = new item;
        nouv->nom = nom;
        nouv->adresse = adresse;
        nouv->tel = tel;
        nouv->next = NULL;
        while (ptr->next != NULL){
            ptr = ptr->next; // avancer dans le tableau
        }
        ptr->next = nouv;   // inserer l element la ou ->next = NULL
    }

return index;

}

 hash1::hash1(){
    for(int i=0; i<tailleTableau; i++){
        HashTable[i]= new item;

        HashTable[i]->nom = "empty";
        HashTable[i]->adresse = "empty";
        HashTable[i]->tel = "empty";
        HashTable[i]->next = NULL;
    }
 }

int hash1::Hash(string cle){
    int hashage = 0;
    int index;

    index = cle.length();

    for(int i=0; i < cle.length(); i++){
        hashage = hashage + (int) cle[i];
    }

        //    cout << "l index [0] = " << (int)cle[0] << endl;
        //    cout << "l index [1] = " << (int)cle[1] << endl;
        //    cout << "l index [2] = " << (int)cle[2] << endl;

        //cout << "hashage = "  << hashage << endl;

        index = hashage % tailleTableau;

        //cout << "index final = " << index << endl;

    return index;

}
