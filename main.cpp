#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //Hiba az, hogy nem így kell írni [NELEMENTS]
    std::cout << '1-100 ertekek duplazasa'<< std::endl;// Hianyzott <<std::endl és a pontosvessző
    for (int i = 0; i < N_ELEMENTS; i++)//hibásan volt meg adva a kezdő érték
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // itt is hibásan volt megadva
    {
        std::cout << "Ertek:"<< b[i] << std::endl; //hiányzott, hogy mit szeretnénk kiírni, illetve std::endl; vég
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) // vessző helyett pontosvessző kell 
    {
        atlag += b[i]; //hiányzott pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    delete[] b; //memoria felszabadítása
    return 0;
}
