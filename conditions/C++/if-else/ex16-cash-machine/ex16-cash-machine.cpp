#include <iostream>

int main()
{
    // CHALLENGE: the cash machine
    // DÉFI : le distributeur de billets
    //
    // There is 500 DH in your bank account.
    // Il y a 500 DH sur ton compte en banque.
    int balance = 500;
    int amount;

    std::cout << "How much money do you want? ";
    std::cin >> amount;
    std::cout << std::endl;


    // TASK 1: If amount is less than or equal to balance:
    //           - remove amount from balance
    //           - display: Take your money!
    //         Else, display how much is missing, for example: Not enough money: 100 DH missing
    //         (the program must calculate it)
    // TÂCHE 1 : Si amount est plus petit ou égal à balance :
    //           - retire amount de balance
    //           - affiche : Take your money!
    //         Sinon, affiche combien il manque, par exemple : Not enough money: 100 DH missing
    //         (le programme doit le calculer)



    // TASK 2: Display the new balance, for example: Balance: 300 DH
    // TÂCHE 2 : Affiche le nouveau solde, par exemple : Balance: 300 DH



    // Tests / Tests :
    //
    //   STDIN 200  ->  Take your money!                  +  Balance: 300 DH
    //   STDIN 500  ->  Take your money!                  +  Balance: 0 DH
    //   STDIN 600  ->  Not enough money: 100 DH missing  +  Balance: 500 DH

    return 0;
}
