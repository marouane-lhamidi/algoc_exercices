#include <iostream>

int main()
{
    // CHALLENGE: the taxi fare
    // DÉFI : le prix du taxi
    //
    // Prices / Prix :
    //   - 5 km or less / 5 km ou moins    : 20 DH
    //   - 15 km or less / 15 km ou moins  : 40 DH
    //   - more than 15 km / plus de 15 km : 40 DH + 3 DH for each km after 15
    //                                       40 DH + 3 DH pour chaque km après 15

    int distance;

    std::cout << "Distance of the trip (km): ";
    std::cin >> distance;
    std::cout << std::endl;

    int price = 0;


    // TASK 1: With if / else if / else, put the right value in price.
    // TÂCHE 1 : Avec if / else if / else, mets la bonne valeur dans price.
    //   Help / Aide : for 20 km, the km after 15 are: 20 - 15 = 5  /  pour 20 km, les km après 15 sont : 20 - 15 = 5



    // TASK 2: Display the price, for example: Price: 55 DH
    // TÂCHE 2 : Affiche le prix, par exemple : Price: 55 DH



    // Tests / Tests :
    //
    //   STDIN 3   ->  Price: 20 DH
    //   STDIN 5   ->  Price: 20 DH
    //   STDIN 10  ->  Price: 40 DH
    //   STDIN 20  ->  Price: 55 DH
    //   STDIN 30  ->  Price: 85 DH

    return 0;
}
