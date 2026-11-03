#include <iostream>

int main()
{
    // The player has 50 points
    // Le joueur a 50 points
    int points = 50;
    int stars;

    std::cout << "How many stars did you win? ";
    std::cin >> stars;
    std::cout << std::endl;


    // TASK 1: If stars is 3 or more:
    //           - display: Bonus! +10 points
    //           - add 10 to points
    // TÂCHE 1 : Si stars vaut 3 ou plus :
    //           - affiche : Bonus! +10 points
    //           - ajoute 10 à points
    //   Help / Aide : you can put 2 lines inside the { }  /  tu peux mettre 2 lignes dans les { }



    // Display the score / Affiche le score
    std::cout << "Score: " << points << std::endl;


    // TASK 2: Test with STDIN 2, then STDIN 3.
    // TÂCHE 2 : Teste avec STDIN 2, puis STDIN 3.
    //
    //   STDIN 2  ->  Score: 50
    //   STDIN 3  ->  Bonus! +10 points  +  Score: 60

    return 0;
}
