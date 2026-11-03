#include <iostream>

int main()
{
    // CHALLENGE: the restaurant
    // DÉFI : le restaurant
    //
    // Menu / Carte :
    //   1 = Pizza   40 DH
    //   2 = Burger  35 DH
    //   3 = Tacos   30 DH
    //
    // If the total is 100 DH or more, the client gets a discount of 10 DH.
    // Si le total est de 100 DH ou plus, le client a une remise de 10 DH.

    int choice;
    int quantity;

    std::cout << "Your choice (1, 2 or 3): ";
    std::cin >> choice;
    std::cout << "How many? ";
    std::cin >> quantity;
    std::cout << std::endl;

    int price = 0;


    // TASK 1: With a switch on choice, display the dish and put its price in price,
    //         for example: You ordered: Pizza
    //         For any other choice, display: This dish is not on the menu!
    // TÂCHE 1 : Avec un switch sur choice, affiche le plat et mets son prix dans price,
    //           par exemple : You ordered: Pizza
    //           Pour tout autre choix, affiche : This dish is not on the menu!



    // TASK 2: If price is more than 0 (the dish exists):
    //           - calculate the total (price x quantity)
    //           - if the total is 100 or more: display  Discount: -10 DH  and remove 10
    //           - display the total, for example: Total: 110 DH
    // TÂCHE 2 : Si price est plus grand que 0 (le plat existe) :
    //           - calcule le total (prix x quantité)
    //           - si le total vaut 100 ou plus : affiche  Discount: -10 DH  et retire 10
    //           - affiche le total, par exemple : Total: 110 DH



    // Tests: type 2 lines in STDIN (choice, then quantity)
    // Tests : tape 2 lignes dans STDIN (le choix, puis la quantité)
    //
    //   STDIN 1 / 2  ->  You ordered: Pizza   +  Total: 80 DH
    //   STDIN 1 / 3  ->  You ordered: Pizza   +  Discount: -10 DH  +  Total: 110 DH
    //   STDIN 2 / 1  ->  You ordered: Burger  +  Total: 35 DH
    //   STDIN 3 / 4  ->  You ordered: Tacos   +  Discount: -10 DH  +  Total: 110 DH
    //   STDIN 5 / 2  ->  This dish is not on the menu!

    return 0;
}
