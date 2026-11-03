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
    //   Teenager
    //   Between 1 and 9
    //   Weekend!
    //   Not between 3 and 5
    //
    // Rule: do not change the values of the variables.
    // Règle : ne change pas les valeurs des variables.

    int age = 15;
    int x = 5;
    int day = 7;
    int carte = 8;


    // BUG 1: teenager from 12 to 18  /  adolescent de 12 à 18 ans
    if (age >= 12 && <= 18)
    {
        std::cout << "Teenager" << std::endl;
    }

    // BUG 2: x between 1 and 9  /  x entre 1 et 9
    if (x > 0) && (x < 10)
    {
        std::cout << "Between 1 and 9" << std::endl;
    }

    // BUG 3: weekend is day 6 or day 7  /  le week-end, c'est le jour 6 ou le jour 7
    if (day == 6 && day == 7)
    {
        std::cout << "Weekend!" << std::endl;
    }

    // BUG 4: carte between 3 and 5  /  carte entre 3 et 5
    if (carte >= 3 || carte <= 5)
    {
        std::cout << "Between 3 and 5" << std::endl;
    }
    else
    {
        std::cout << "Not between 3 and 5" << std::endl;
    }

    return 0;
}
