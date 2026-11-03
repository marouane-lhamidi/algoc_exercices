#include <iostream>

int main()
{
    // CHALLENGE: this program has 4 bugs. Find them and fix them!
    // DÉFI : ce programme a 4 bugs. Trouve-les et corrige-les !
    //
    // Step 1: Click Run. The program does not even start: fix the errors first (bugs 1 and 2).
    // Étape 1 : Clique sur Run. Le programme ne démarre même pas : corrige d'abord les erreurs (bugs 1 et 2).
    //
    // Step 2: Then the program runs, but 2 messages are wrong (bugs 3 and 4).
    // Étape 2 : Ensuite le programme marche, mais 2 messages sont faux (bugs 3 et 4).
    //
    // With the values below, the program must display:
    // Avec les valeurs ci-dessous, le programme doit afficher :
    //   You win a star!
    //   You pay the child price
    //   It is hot!
    //   Game over
    //
    // Rule: do not change the values of the variables.
    // Règle : ne change pas les valeurs des variables.

    int points = 12;
    int age = 9;
    int temperature = 32;
    int lives = 0;


    // BUG 1: a star for 10 points or more  /  une étoile pour 10 points ou plus
    if (points >= 10);
    {
        std::cout << "You win a star!" << std::endl;
    }
    else
    {
        std::cout << "No star this time" << std::endl;
    }

    // BUG 2: child price under 12  /  prix enfant en dessous de 12 ans
    if (age < 12)
    {
        std::cout << "You pay the child price" << std::endl;
    }
    else (age >= 12)
    {
        std::cout << "You pay the normal price" << std::endl;
    }

    // BUG 3: hot above 25  /  chaud au-dessus de 25
    if (temperature > 25)
    {
        std::cout << "It is cold!" << std::endl;
    }
    else
    {
        std::cout << "It is hot!" << std::endl;
    }

    // BUG 4: game over when lives is 0  /  game over quand lives vaut 0
    if (lives = 0)
    {
        std::cout << "Game over" << std::endl;
    }
    else
    {
        std::cout << "Keep playing" << std::endl;
    }

    return 0;
}
