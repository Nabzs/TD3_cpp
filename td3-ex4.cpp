#include <iostream>

int main()
{
    std::cout << " Entrez votre age" << std::endl;

    int nombre{0};
    bool cest_bon{0};

    while(!cest_bon){
        std::cin >> nombre;

        if (std::cin.fail())
        {
            std::cout << " Veuillez entrer un nombre entier" << std::endl;
            std::cin.clear(); // On remet std::cin dans un état fonctionnel.
            std::cin.ignore(255, '\n'); // On vide les caractères mémorisés.
        }
            
        else if (nombre < 0)
            std::cout << " Veuillez entrer un age positif" << std::endl;
        else 
            cest_bon = 1;
    }

    if (nombre >= 18)
            std::cout << " Vous etes majeur" << std::endl;
        else
            std::cout << " Vous etes mineur" << std::endl;


    return 0;
}