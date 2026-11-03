#include <iostream>

int main()
{
    // CHALLENGE: the calculator
    // DÉFI : la calculatrice
    //
    // Operations / Opérations :
    //   1 = addition (+)   2 = subtraction (-)   3 = multiplication (*)   4 = division (/)

    int a;
    int b;
    int operation;

    std::cout << "First number: ";
    std::cin >> a;
    std::cout << "Second number: ";
    std::cin >> b;
    std::cout << "Operation (1 = +, 2 = -, 3 = *, 4 = /): ";
    std::cin >> operation;
    std::cout << std::endl;


    // TASK 1: With a switch on operation, display the result, for example: 8 + 2 = 10
    // TÂCHE 1 : Avec un switch sur operation, affiche le résultat, par exemple : 8 + 2 = 10
    //
    // TASK 2: For any other operation, display: Unknown operation!
    // TÂCHE 2 : Pour toute autre opération, affiche : Unknown operation!
    //
    // TASK 3: In case 4, we cannot divide by 0! If b is 0, display: Cannot divide by 0!
    //         (you can write an if / else INSIDE a case)
    // TÂCHE 3 : Dans le case 4, on ne peut pas diviser par 0 ! Si b vaut 0, affiche : Cannot divide by 0!
    //           (tu peux écrire un if / else À L'INTÉRIEUR d'un case)



    // Tests: type 3 lines in STDIN (a, b, operation)
    // Tests : tape 3 lignes dans STDIN (a, b, opération)
    //
    //   STDIN 8 / 2 / 1  ->  8 + 2 = 10
    //   STDIN 8 / 2 / 2  ->  8 - 2 = 6
    //   STDIN 8 / 2 / 3  ->  8 * 2 = 16
    //   STDIN 8 / 2 / 4  ->  8 / 2 = 4
    //   STDIN 8 / 0 / 4  ->  Cannot divide by 0!
    //   STDIN 8 / 2 / 7  ->  Unknown operation!

    return 0;
}
