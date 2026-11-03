#include <iostream>

int main()
{
    // The card of the player
    // La carte du joueur
    int carte = 4;
    int points = 0;

    // && means "and": BOTH conditions must be true
    // && veut dire « et » : les DEUX conditions doivent être vraies
    if (carte >= 3 && carte <= 5)
    {
        points += 2;
    }

    std::cout << "Points: " << points << std::endl;


    // TASK 1: Click Run. Is carte >= 3 true? Is carte <= 5 true? So how many points?
    // TÂCHE 1 : Clique sur Run. Est-ce que carte >= 3 est vrai ? Et carte <= 5 ? Donc combien de points ?

    // TASK 2: Before each Run, guess the points. Then test with carte = 6, 2, 3 and 5.
    // TÂCHE 2 : Avant chaque Run, devine les points. Puis teste avec carte = 6, 2, 3 et 5.
    //
    //   carte = 4  ->  Points: 2
    //   carte = 6  ->  Points: ?
    //   carte = 2  ->  Points: ?
    //   carte = 3  ->  Points: ?
    //   carte = 5  ->  Points: ?

    // Question: with carte = 6, which condition is false?
    // Question : avec carte = 6, quelle condition est fausse ?

    return 0;
}
