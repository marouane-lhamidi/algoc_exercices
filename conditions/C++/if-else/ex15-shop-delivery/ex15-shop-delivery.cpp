#include <iostream>

int main()
{
    // CHALLENGE: the online shop
    // DÉFI : la boutique en ligne
    //
    // Rules / Règles :
    //   - basket of 100 DH or more  ->  discount of 20 DH (remise de 20 DH)
    //   - else                      ->  delivery costs 15 DH (livraison de 15 DH)

    int total;

    std::cout << "Total of your basket (DH): ";
    std::cin >> total;
    std::cout << std::endl;


    // TASK 1: With if / else, change total:
    //           - 100 or more: display  Discount: -20 DH  and remove 20 from total
    //           - else:        display  Delivery: +15 DH  and add 15 to total
    // TÂCHE 1 : Avec if / else, change total :
    //           - 100 ou plus : affiche  Discount: -20 DH  et retire 20 à total
    //           - sinon :       affiche  Delivery: +15 DH  et ajoute 15 à total



    // TASK 2: Display what the client must pay, for example: To pay: 100 DH
    // TÂCHE 2 : Affiche ce que le client doit payer, par exemple : To pay: 100 DH



    // Tests / Tests :
    //
    //   STDIN 120  ->  Discount: -20 DH  +  To pay: 100 DH
    //   STDIN 100  ->  Discount: -20 DH  +  To pay: 80 DH
    //   STDIN 60   ->  Delivery: +15 DH  +  To pay: 75 DH

    return 0;
}
