#include <iostream>

int main()
{
    std::cout << " Entrez un entier" << std::endl;

    int nombre{0};

    std::cin >> nombre;

    int modulo2{nombre%2};

    for(int i{modulo2}; i < nombre; i+=2)
    {
        std::cout << i << std::endl;
    }

    return 0;
}