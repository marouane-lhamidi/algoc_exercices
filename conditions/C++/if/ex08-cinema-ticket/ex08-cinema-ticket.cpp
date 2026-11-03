#include <iostream>

int main()
{
    // CHALLENGE: the cinema ticket
    // DÉFI : le ticket de cinéma
    //
    // Prices / Prix :
    //   - normal price / prix normal       : 50 DH
    //   - under 12 / moins de 12 ans       : 30 DH
    //   - 60 or more / 60 ans ou plus      : 25 DH

    int age;
    int money;

    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "How much money do you have? ";
    std::cin >> money;
    std::cout << std::endl;

    int price = 50;


    // TASK 1: Use 2 if to change price for children and for people aged 60 or more.
    // TÂCHE 1 : Utilise 2 if pour changer price pour les enfants et pour les 60 ans ou plus.



    // TASK 2: Display the price, for example: Price: 30 DH
    // TÂCHE 2 : Affiche le prix, par exemple : Price: 30 DH



    // TASK 3: If money is enough, display: You can buy your ticket!
    // TÂCHE 3 : Si money suffit, affiche : You can buy your ticket!



    // TASK 4: If money is not enough, display how much is missing, for example: You need 20 DH more.
    //         (the program must calculate it: price - money)
    // TÂCHE 4 : Si money ne suffit pas, affiche combien il manque, par exemple : You need 20 DH more.
    //           (le programme doit le calculer : price - money)



    // Tests: type 2 lines in STDIN (age, then money)
    // Tests : tape 2 lignes dans STDIN (l'âge, puis l'argent)
    //
    //   STDIN 10 / 40  ->  Price: 30 DH  +  You can buy your ticket!
    //   STDIN 25 / 30  ->  Price: 50 DH  +  You need 20 DH more.
    //   STDIN 65 / 25  ->  Price: 25 DH  +  You can buy your ticket!

    return 0;
}
