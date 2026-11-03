#include <iostream>

int main()
{
    // CHALLENGE: this program has 4 bugs. Find them and fix them!
    // DÉFI : ce programme a 4 bugs. Trouve-les et corrige-les !
    //
    // Step 1: Click Run. The program does not even start: fix the errors first (bugs 1 and 2).
    // Étape 1 : Clique sur Run. Le programme ne démarre même pas : corrige d'abord les erreurs (bugs 1 et 2).
    //
    // Step 2: Then the program runs, but the messages are wrong (bugs 3 and 4).
    // Étape 2 : Ensuite le programme marche, mais les messages sont faux (bugs 3 et 4).
    //
    // With the values below, the program must display:
    // Avec les valeurs ci-dessous, le programme doit afficher :
    //   Gold medal
    //   Two stars
    //   Red
    //   Unknown level
    //
    // Rule: do not change the values of the variables.
    // Règle : ne change pas les valeurs des variables.

    int medal = 1;
    int stars = 2;
    int color = 1;
    int level = 9;


    // BUG 1: medals / médailles  (1: gold, 2: silver)
    switch medal
    {
        case 1:
            std::cout << "Gold medal" << std::endl;
            break;
        case 2:
            std::cout << "Silver medal" << std::endl;
            break;
    }

    // BUG 2: stars / étoiles  (1: one star, 2: two stars)
    switch (stars)
    {
        case 1;
            std::cout << "One star" << std::endl;
            break;
        case 2;
            std::cout << "Two stars" << std::endl;
            break;
    }

    // BUG 3: colors / couleurs  (1: red, 2: green, 3: blue)
    switch (color)
    {
        case 1:
            std::cout << "Red" << std::endl;
        case 2:
            std::cout << "Green" << std::endl;
        case 3:
            std::cout << "Blue" << std::endl;
            break;
    }

    // BUG 4: levels / niveaux  (1: easy, 2: hard, any other number: Unknown level)
    switch (level)
    {
        case 1:
            std::cout << "Easy" << std::endl;
            break;
        case 2:
            std::cout << "Hard" << std::endl;
            break;
    }

    return 0;
}
