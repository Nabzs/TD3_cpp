#include <iostream>

int main()
{
    std::cout <<" Entrez un entier "<< std::endl; 

    int nombre{0};

    std::cin >> nombre;

    if (nombre >= 0)

        std::cout << nombre << " est positif"<< std::endl; 

    else
        std::cout << nombre <<" est negatif" << std::endl;


        return 0;
}