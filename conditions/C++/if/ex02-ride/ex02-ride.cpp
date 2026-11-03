#include <iostream>

int main()
{
    // The roller coaster is for children aged 12 or more
    // Le manège est pour les enfants de 12 ans ou plus
    int age = 13;


    // TASK 1: Write an if: if age is 12 or more, display: You can ride!
    // TÂCHE 1 : Écris un if : si age vaut 12 ou plus, affiche : You can ride!
    //   Help / Aide : "12 or more" = >=



    std::cout << "Next child, please" << std::endl;


    // TASK 2: Test with age = 10, then age = 12. Is the message displayed?
    // TÂCHE 2 : Teste avec age = 10, puis age = 12. Le message s'affiche-t-il ?
    //
    //   age = 13  ->  You can ride!   +  Next child, please
    //   age = 10  ->  Next child, please
    //   age = 12  ->  You can ride!   +  Next child, please

    return 0;
}
