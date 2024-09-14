#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //N_ELEMENTS lett definiálva
    std::cout << '1-100 ertekek duplazasa' //; hiány
    for (int i = 0;) // hibás for ciklus feltétel hiány
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // hibás for ciklus feltétel hiány
    {
        std::cout << "Ertek:" //; hiány és b[i] kiírás
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // hibás for ciklus a , miatt
    {
        atlag += b[i] // atlag nem lett inicializálva és ; hiány
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
