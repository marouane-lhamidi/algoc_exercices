#include <iostream>

int main()
{
    // The player has 3 points
    // Le joueur a 3 points
    int points = 3;

    // If points is greater than 4: Bravo! Else: Try again!
    // Si points est plus grand que 4 : Bravo! Sinon : Try again!
    if (points > 4)
    {
        std::cout << "Bravo!" << std::endl;
    }
    else
    {
        std::cout << "Try again!" << std::endl;
    }


    // TASK 1: Click Run. Which block runs: if or else? Why?
    // TÂCHE 1 : Clique sur Run. Quel bloc s'exécute : if ou else ? Pourquoi ?

    // TASK 2: Change points to 6 and click Run again. Which block runs now?
    // TÂCHE 2 : Change points en 6 et clique encore sur Run. Quel bloc s'exécute maintenant ?

    // TASK 3: Can you find a value of points where BOTH messages are displayed? Try!
    // TÂCHE 3 : Peux-tu trouver une valeur de points où les DEUX messages s'affichent ? Essaie !

    return 0;
}
