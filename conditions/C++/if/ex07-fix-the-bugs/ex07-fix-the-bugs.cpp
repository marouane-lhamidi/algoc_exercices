#include <iostream>

int main()
{
    // CHALLENGE: this program has 4 bugs. Find them and fix them!
    // DÉFI : ce programme a 4 bugs. Trouve-les et corrige-les !
    //
    // With the values below, the program must display ONLY:
    // Avec les valeurs ci-dessous, le programme doit afficher SEULEMENT :
    //   You win a medal!
    //   End
    //
    // Rule: do not change the values of the variables.
    // Règle : ne change pas les valeurs des variables.

    int age = 12;
    int points = 5;
    int score = 10;
    int lives = 2;


    // BUG 1: only for 18 years old  /  seulement pour 18 ans
    if (age = 18)
    {
        std::cout << "You are 18!" << std::endl;
    }

    // BUG 2: only if points is greater than 10  /  seulement si points est plus grand que 10
    if (points > 10);
    {
        std::cout << "More than 10 points!" << std::endl;
    }

    // BUG 3: a medal for a score of 10 OR MORE  /  une médaille pour un score de 10 OU PLUS
    if (score > 10)
    {
        std::cout << "You win a medal!" << std::endl;
    }

    // BUG 4: both messages only when lives is 0  /  les deux messages seulement quand lives vaut 0
    if (lives == 0)
        std::cout << "Game over" << std::endl;
        std::cout << "No lives left" << std::endl;


    std::cout << "End" << std::endl;

    return 0;
}
