#include <iostream>

int main()
{
    // The card of the player
    // La carte du joueur
    int carte = 7;
    int points = 0;

    // The machine checks the conditions from top to bottom
    // and stops at the FIRST true condition.
    // La machine vérifie les conditions de haut en bas
    // et s'arrête à la PREMIÈRE condition vraie.
    if (carte > 6)
    {
        points += 3;
    }
    else if (carte > 3)
    {
        points += 2;
    }
    else
    {
        points += 1;
    }

    std::cout << "Points: " << points << std::endl;


    // TASK 1: Click Run. carte = 7 is greater than 6 AND greater than 3. Why do we get only 3 points?
    // TÂCHE 1 : Clique sur Run. carte = 7 est plus grande que 6 ET plus grande que 3. Pourquoi on a seulement 3 points ?

    // TASK 2: Before each Run, guess the points. Then test with carte = 5, then carte = 2.
    // TÂCHE 2 : Avant chaque Run, devine les points. Puis teste avec carte = 5, puis carte = 2.
    //
    //   carte = 7  ->  Points: 3
    //   carte = 5  ->  Points: ?
    //   carte = 2  ->  Points: ?

    return 0;
}
