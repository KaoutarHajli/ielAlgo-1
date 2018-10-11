#include <iostream>
#include <string>

using namespace std;

#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class hash1{
    private:
        static const int tailleTableau = 10;

        struct item{
            string  nom;
            string  adresse;
            string  tel;
            item*   next;
        };

        item* HashTable[tailleTableau];

    public:
        int Hash(string cle);
        hash1();
        int  ajouterItem(string nom, string adresse, string tel);
        int  nombreItems(int index); // nombre items dans tableau
        void afficherItems(); // afficher le contenu du tableau
        void afficherItemsDansIndex(int index); // les items qui ont le même resultat de hashage et qui sont empilés

};


#endif // HASH_H_INCLUDED
