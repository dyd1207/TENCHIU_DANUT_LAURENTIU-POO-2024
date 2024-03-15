#include "pch.h"
#include <iostream>

using namespace System;
using namespace std;

ref class Animal
{
public:
    int legs;
    void SetName(String^ nm)
    {
        name = nm;
    }

    String^ GetName()
    {
        return name;
    }
private:
    String^ name;
};

int main()
{
    Animal cat, dog;
    cat.SetName("Cat");
    cat.legs = 4;
    dog.SetName("Dog");
    dog.legs = 4;

    Console::WriteLine("Animal 1");
    Console::WriteLine("Name:   ");
    Console::WriteLine(cat.GetName());
    Console::WriteLine("Legs:   ");
    Console::WriteLine(cat.legs);

    Console::WriteLine("Animal 2");
    Console::WriteLine("Name:   ");
    Console::WriteLine(dog.GetName());
    Console::WriteLine("Legs:   ");
    Console::WriteLine(dog.legs);
    return 0;
}
