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
    //   Child ticket
    //   Medium
    //   Gold medal
    //   Steam
    //
    // Rule: do not change the values of the variables.
    // Règle : ne change pas les valeurs des variables.

    int age = 8;
    int size = 150;
    int points = 12;
    int temperature = 100;


    // BUG 1: tickets / billets  (under 4: free, under 12: child, else: adult)
    if (age < 4)
    {
        std::cout << "Free ticket" << std::endl;
    }
    else if age < 12
    {
        std::cout << "Child ticket" << std::endl;
    }
    else
    {
        std::cout << "Adult ticket" << std::endl;
    }

    // BUG 2: T-shirt size / taille du T-shirt  (under 140: Small, under 170: Medium, else: Large)
    if (size < 140)
    {
        std::cout << "Small" << std::endl;
    }
    else
    {
        std::cout << "Large" << std::endl;
    }
    else if (size < 170)
    {
        std::cout << "Medium" << std::endl;
    }

    // BUG 3: medals / médailles  (10 or more: gold, 5 or more: silver, else: none)
    if (points >= 5)
    {
        std::cout << "Silver medal" << std::endl;
    }
    else if (points >= 10)
    {
        std::cout << "Gold medal" << std::endl;
    }
    else
    {
        std::cout << "No medal" << std::endl;
    }

    // BUG 4: water / eau  (100 or more: steam, more than 0: liquid, else: ice)
    if (temperature > 100)
    {
        std::cout << "Steam" << std::endl;
    }
    else if (temperature > 0)
    {
        std::cout << "Liquid" << std::endl;
    }
    else
    {
        std::cout << "Ice" << std::endl;
    }

    return 0;
}
