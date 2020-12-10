#include<iostream>
#include "arreglo.h"
#include"Computadora.h"
#include<string>
using namespace std;

int main()
{
    Arreglo<Computadora>computadoras;

    Computadora p01("1 Tb", "12 Gb", "Ubuntu", "Asus");
    Computadora p02("250 Gb", "8 Gb", "Windows", "Dell");
    Computadora p03("480 Gb", "12 Gb", "Linux", "Apple");
    Computadora p04("1 Tb", "12 Gb", "Windows", "Hp");

    computadoras << p01 << p02 << p03 << p04 << p02 << p02;
    Computadora p05("256 Gb", "8 Gb", "Windows", "HP");

    Arreglo<Computadora*> ptrs = computadoras.buscar_todos(p05);

    if(ptrs.size() > 0){
        for (size_t i = 0; i < ptrs.size(); i++)
        {
            Computadora *p = ptrs[i];
            cout << *p << endl;
        }
    }
    else{
        cout << "No existen coincidencia alguna" << endl;
    }


    return 0;
}
