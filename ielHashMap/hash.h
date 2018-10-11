#include <iostream>
#include <string>

using namespace std;


#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class hash1{
    private:
        static const int tailleTableau = 10;

        struct item{
            string nom;
            string adresse;
            string tel;
            item* next;
        };
        item* HashTable[tailleTableau];

    public:
        int Hash(string cle);
        hash1();
        void ajouterItem(string nom, string adresse, string tel);

};


#endif // HASH_H_INCLUDED
