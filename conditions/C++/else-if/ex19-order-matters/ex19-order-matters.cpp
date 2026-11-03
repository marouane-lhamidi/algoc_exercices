#include <iostream>

int main()
{
    // The score of the game (out of 20)
    // Le score de la partie (sur 20)
    int score = 19;

    // Expected / Attendu :
    //   18 or more  ->  Excellent!
    //   15 or more  ->  Very good!
    //   10 or more  ->  Good!
    //   else        ->  Keep training!
    if (score >= 10)
    {
        std::cout << "Good!" << std::endl;
    }
    else if (score >= 15)
    {
        std::cout << "Very good!" << std::endl;
    }
    else if (score >= 18)
    {
        std::cout << "Excellent!" << std::endl;
    }
    else
    {
        std::cout << "Keep training!" << std::endl;
    }


    // TASK 1: Click Run. score = 19 but the program says Good!  Why?
    // TÂCHE 1 : Clique sur Run. score = 19 mais le programme dit Good!  Pourquoi ?

    // TASK 2: Change the ORDER of the conditions to fix the program.
    //         Do not change the numbers or the messages.
    // TÂCHE 2 : Change l'ORDRE des conditions pour corriger le programme.
    //           Ne change pas les nombres ni les messages.

    // TASK 3: Test with score = 19, 16, 12, then 5.
    // TÂCHE 3 : Teste avec score = 19, 16, 12, puis 5.
    //
    //   score = 19  ->  Excellent!
    //   score = 16  ->  Very good!
    //   score = 12  ->  Good!
    //   score = 5   ->  Keep training!

    return 0;
}
