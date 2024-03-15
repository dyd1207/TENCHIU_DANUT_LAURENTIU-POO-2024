//Aplicatie care afiseaza nume si varsta unei persoane

#include "pch.h"
#include <iostream>

using namespace System; //pt Visual Studio C++/CLI
using namespace std;

struct Carte
{
    unsigned anul_ap; // anul aparitiei
    unsigned vechime;
    char autor[20];
    char editura[20];
};

class Cart
{
private:
    unsigned anul_ap; // anul aparitiei
    unsigned vechime;
    char autor[20];
    char editura[20];

public:
    //2 metode cu acelasi nume cu cel al clasei, adica Pers
    //o metoda cu params si una fara params
    Cart(unsigned anul_ap1, unsigned vechime1,char* autor1, char* editura1)
    {
        anul_ap = anul_ap1;
        vechime = vechime1;
        strcpy_s(autor, 20, autor1);
        strcpy_s(editura, 20, editura1);
    }
    Cart() {}
    unsigned arata_anul_ap() { return this->anul_ap; }
    unsigned arata_vechime() { return this->vechime; }
    char* arata_autor() { return this->autor; }
    char* arata_editura() { return this->editura; }

};


int main()
{

    Console::WriteLine("Introduceti numarul de carti: "); // specific VISUAL C++/CLI
    int nr_carti;
    cin >> nr_carti;
    Carte* carti = new Carte[nr_carti];

    for (int i = 0; i < nr_carti; i++)
    {
        Console::WriteLine("Introduceti autorul {0}", i + 1);
        char autor[20];
        cin >> autor;
        strcpy_s(carti[i].autor, 20, autor);

        Console::WriteLine("Introduceti editura {0}", i + 1);
        char editura[20];
        cin >> editura;
        strcpy_s(carti[i].editura, 20, editura);

        Console::WriteLine("Introduceti anul aparitiei {0}", i + 1);
        unsigned anul_ap;
        cin >> anul_ap;
        carti[i].anul_ap = anul_ap;

        Console::WriteLine("Introduceti anul vechime {0}", i + 1);
        unsigned vechime;
        cin >> vechime;
        carti[i].vechime = vechime;
    }

    Console::WriteLine("Afisam Cartile aferente Autor/Editura/Anul aparatiei/Vechime: ");

    for (int i = 0; i < nr_carti; i++)
    {
        cout << carti[i].autor << "\t" << carti[i].editura << "\t" << carti[i].anul_ap << "\t" << carti[i].vechime << endl;
    }

    //get_char()
    Console::ReadKey(); // specific Visual C++/CLI

    return 0;
}
