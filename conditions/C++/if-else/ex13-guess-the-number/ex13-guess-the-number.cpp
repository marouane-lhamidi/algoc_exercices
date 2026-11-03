#include <iostream>

int main()
{
    // The secret number is 7
    // Le nombre secret est 7
    int secret = 7;
    int guess;

    std::cout << "Guess the secret number (1 to 10): ";
    std::cin >> guess;
    std::cout << std::endl;


    // TASK 1: If guess is equal to secret, display: You found it!
    //         Else, display: Wrong! The secret number was 7
    //         (display the variable secret, do not write 7 in the message)
    // TÂCHE 1 : Si guess est égal à secret, affiche : You found it!
    //           Sinon, affiche : Wrong! The secret number was 7
    //           (affiche la variable secret, n'écris pas 7 dans le message)



    std::cout << "Thanks for playing" << std::endl;


    // TASK 2: Type a number in STDIN, then click Run.
    // TÂCHE 2 : Tape un nombre dans STDIN, puis clique sur Run.
    //
    //   STDIN 7  ->  You found it!                  +  Thanks for playing
    //   STDIN 3  ->  Wrong! The secret number was 7  +  Thanks for playing

    return 0;
}
