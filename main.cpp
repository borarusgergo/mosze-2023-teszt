#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS lett defini�lva
    std::cout << '1-100 ertekek duplazasa' //; hi�ny
    for (int i = 0;) // hib�s for ciklus felt�tel hi�ny
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hib�s for ciklus felt�tel hi�ny
    {
        std::cout << "Ertek:" //; hi�ny �s b[i] ki�r�s
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // hib�s for ciklus a , miatt
    {
        atlag += b[i] // atlag nem lett inicializ�lva �s ; hi�ny
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
