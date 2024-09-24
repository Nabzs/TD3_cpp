#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
    std::srand(std::time(nullptr));

    std::cout << " Entrez un nombre entier entre 1 et 100" << std::endl;

    int nombre{0};
    int rand{std::rand() % 100 + 1};

    while(nombre != rand){

        std::cin >> nombre;

        if(nombre > rand)
            std::cout << "C'est plus petit" << std::endl;
        else if(nombre < rand) 
            std::cout << "C'est plus grand" << std::endl;
        else
            std::cout << "Vous avez trouve le nombre mystere!" << std::endl;
    }



    return 0;
}