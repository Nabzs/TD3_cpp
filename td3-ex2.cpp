#include <iostream>

int main()
{
    std::cout << " Entrez des entiers positifs " << std::endl;

    int nombre{0};
    int add{0};
    int compteur{0};

    std::cin >> nombre;

    while (nombre > 0){
        add += nombre;
        std::cin >> nombre;
        compteur++;

    }
    std::cout << "La somme des entiers est : " << add << std::endl;
    std::cout << "La moyenne des entiers est : " << static_cast<float>(add)/compteur << std::endl;

    return 0;
}