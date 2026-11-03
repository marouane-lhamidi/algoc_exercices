#include <iostream>

int main()
{
    int grade;

    std::cout << "Your grade (out of 20): ";
    std::cin >> grade;
    std::cout << std::endl;


    // TASK 1: Display the mention of the grade:
    // TÂCHE 1 : Affiche la mention de la note :
    //
    //   16 or more / 16 ou plus  ->  Very good
    //   14 or more / 14 ou plus  ->  Good
    //   12 or more / 12 ou plus  ->  Quite good
    //   10 or more / 10 ou plus  ->  Pass
    //   else / sinon             ->  Fail
    //
    //   Help / Aide : start with the BIGGEST grade  /  commence par la PLUS GRANDE note



    // TASK 2: Type a grade in STDIN, then click Run.
    // TÂCHE 2 : Tape une note dans STDIN, puis clique sur Run.
    //
    //   STDIN 17  ->  Very good
    //   STDIN 14  ->  Good
    //   STDIN 12  ->  Quite good
    //   STDIN 10  ->  Pass
    //   STDIN 8   ->  Fail

    return 0;
}
