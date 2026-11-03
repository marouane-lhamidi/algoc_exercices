#include <iostream>

int main()
{
    // The level of the game / Le niveau du jeu
    int level = 2;

    // This program works, but it repeats "level ==" every time.
    // Ce programme marche, mais il répète « level == » à chaque fois.
    if (level == 1)
    {
        std::cout << "Easy" << std::endl;
    }
    else if (level == 2)
    {
        std::cout << "Medium" << std::endl;
    }
    else if (level == 3)
    {
        std::cout << "Hard" << std::endl;
    }
    else
    {
        std::cout << "Unknown level" << std::endl;
    }


    // TASK 1: Rewrite the same program with a switch, below.
    //         Then delete (or put in comments) the if / else if above.
    // TÂCHE 1 : Réécris le même programme avec un switch, en dessous.
    //           Puis efface (ou mets en commentaire) le if / else if du dessus.
    //   Help / Aide : else  ->  default



    // TASK 2: Test with level = 2, 1, 3, then 5. You must get the SAME messages as before.
    // TÂCHE 2 : Teste avec level = 2, 1, 3, puis 5. Tu dois avoir les MÊMES messages qu'avant.
    //
    //   level = 2  ->  Medium
    //   level = 1  ->  Easy
    //   level = 3  ->  Hard
    //   level = 5  ->  Unknown level

    return 0;
}
