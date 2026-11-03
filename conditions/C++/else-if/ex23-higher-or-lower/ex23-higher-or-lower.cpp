#include <iostream>

int main()
{
    // CHALLENGE: higher or lower?
    // DÉFI : plus grand ou plus petit ?
    int secret = 42;
    int guess;

    std::cout << "Guess the secret number (1 to 100): ";
    std::cin >> guess;
    std::cout << std::endl;


    // TASK 1: With if / else if / else:
    //           - guess is equal to secret  ->  display: You found it!
    //           - guess is smaller          ->  display: Too small!
    //           - else                      ->  display: Too big!
    // TÂCHE 1 : Avec if / else if / else :
    //           - guess est égal à secret   ->  affiche : You found it!
    //           - guess est plus petit      ->  affiche : Too small!
    //           - sinon                     ->  affiche : Too big!



    // TASK 2: In the "Too small" and "Too big" messages, also display how far the guess is,
    //         for example: Too small! You are 12 away.  (the program must calculate it)
    // TÂCHE 2 : Dans les messages « Too small » et « Too big », affiche aussi la distance,
    //           par exemple : Too small! You are 12 away.  (le programme doit la calculer)
    //   Help / Aide : the distance is always positive  /  la distance est toujours positive



    // Tests / Tests :
    //
    //   STDIN 42  ->  You found it!
    //   STDIN 30  ->  Too small! You are 12 away.
    //   STDIN 50  ->  Too big! You are 8 away.

    return 0;
}
