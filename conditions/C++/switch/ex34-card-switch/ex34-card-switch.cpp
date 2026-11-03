#include <iostream>

int main()
{
    // The card of the player
    // La carte du joueur
    int carte = 5;
    int points = 0;

    // switch looks at ONE variable and goes to the case with the same value
    // switch regarde UNE variable et va au case qui a la même valeur
    switch (carte)
    {
        case 3:
            points += 3;
            break;
        case 5:
            points += 2;
            break;
        default:
            points += 1;
    }

    std::cout << "Points: " << points << std::endl;


    // TASK 1: Click Run. Which case runs? Why?
    // TÂCHE 1 : Clique sur Run. Quel case s'exécute ? Pourquoi ?

    // TASK 2: Before each Run, guess the points. Then test with carte = 3, then carte = 7.
    // TÂCHE 2 : Avant chaque Run, devine les points. Puis teste avec carte = 3, puis carte = 7.
    //
    //   carte = 5  ->  Points: 2
    //   carte = 3  ->  Points: ?
    //   carte = 7  ->  Points: ?

    // Question: there is no "case 7". What happens with carte = 7?
    // Question : il n'y a pas de « case 7 ». Que se passe-t-il avec carte = 7 ?

    return 0;
}
