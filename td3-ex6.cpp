#include <iostream>

int main()
{
    std::cout << " Entrez un nombre entier positif" << std::endl;

    int nombre{0};

    std::cin >> nombre;

    for (int i = 1; i <= nombre; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "_________________" << std::endl;

    for (int i = 1; i <= nombre; i++)
    {
        for (int j = 0; j < nombre - i; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < i * 2 - 1; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    std::cout << "_________________" << std::endl;


    for (int i = 0; i < nombre; i++)
    {
        for (int j = 0; j < nombre; j++)
        {
            if (i==nombre-1 || j==nombre-1 || i==0 || j==0)
                std::cout << "*";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}