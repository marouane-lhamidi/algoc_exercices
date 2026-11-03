#include <iostream>

int main()
{
    // FINAL CHALLENGE: the treasure quest
    // DÉFI FINAL : la quête du trésor
    //
    // You are in a castle with 3 doors.
    // Tu es dans un château avec 3 portes.
    //   - door 1 / porte 1 : a dragon. With 50 coins or more, you pay him and take the treasure.
    //                        un dragon. Avec 50 pièces ou plus, tu le paies et tu prends le trésor.
    //   - door 2 / porte 2 : an empty room.  /  une salle vide.
    //   - door 3 / porte 3 : a riddle. The answer is 7.  /  une énigme. La réponse est 7.

    int door;
    int coins;
    int answer;

    std::cout << "Which door do you open (1, 2 or 3)? ";
    std::cin >> door;
    std::cout << "How many coins do you have? ";
    std::cin >> coins;
    std::cout << "Riddle: 3 + 4 = ? ";
    std::cin >> answer;
    std::cout << std::endl;

    int treasure = 0;


    // TASK 1: With if / else if / else and &&, display ONE message:
    // TÂCHE 1 : Avec if / else if / else et &&, affiche UN seul message :
    //
    //   door 1 and 50 coins or more  ->  You pay the dragon and take the treasure!   (treasure = 100)
    //   door 1 (less than 50 coins)  ->  The dragon chases you away!
    //   door 2                       ->  Nothing here...
    //   door 3 and the answer is 7   ->  Good answer! The treasure is yours!         (treasure = 100)
    //   door 3 (wrong answer)        ->  Wrong answer! The door stays closed.
    //   any other door               ->  This door does not exist!



    // TASK 2: If treasure is more than 0, display: You win 100 gold coins!
    //         Else, display: Game over, try again!
    //         (display the variable treasure, do not write 100)
    // TÂCHE 2 : Si treasure est plus grand que 0, affiche : You win 100 gold coins!
    //           Sinon, affiche : Game over, try again!
    //           (affiche la variable treasure, n'écris pas 100)



    // Tests: type 3 lines in STDIN (door, coins, answer)
    // Tests : tape 3 lignes dans STDIN (porte, pièces, réponse)
    //
    //   STDIN 1 / 60 / 0  ->  You pay the dragon and take the treasure!  +  You win 100 gold coins!
    //   STDIN 1 / 20 / 7  ->  The dragon chases you away!                +  Game over, try again!
    //   STDIN 2 / 99 / 7  ->  Nothing here...                            +  Game over, try again!
    //   STDIN 3 / 0 / 7   ->  Good answer! The treasure is yours!        +  You win 100 gold coins!
    //   STDIN 3 / 0 / 6   ->  Wrong answer! The door stays closed.       +  Game over, try again!
    //   STDIN 5 / 0 / 0   ->  This door does not exist!                  +  Game over, try again!

    return 0;
}
