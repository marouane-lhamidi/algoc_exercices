#include <iostream>

int main()
{
    // FINAL CHALLENGE: rock, paper, scissors (2 players)
    // DÉFI FINAL : pierre, feuille, ciseaux (2 joueurs)
    //
    //   1 = rock / pierre      ->  beats scissors / bat les ciseaux
    //   2 = paper / feuille    ->  beats rock / bat la pierre
    //   3 = scissors / ciseaux ->  beat paper / battent la feuille

    int player1;
    int player2;

    std::cout << "Player 1, your choice (1, 2 or 3): ";
    std::cin >> player1;
    std::cout << "Player 2, your choice (1, 2 or 3): ";
    std::cin >> player2;
    std::cout << std::endl;


    // TASK 1: If one choice is NOT 1, 2 or 3, display: Invalid choice!
    // TÂCHE 1 : Si un des choix n'est PAS 1, 2 ou 3, affiche : Invalid choice!

    // TASK 2: Else, if both players chose the same thing, display: Draw!
    // TÂCHE 2 : Sinon, si les deux joueurs ont choisi la même chose, affiche : Draw!

    // TASK 3: Else, if player 1 wins, display: Player 1 wins!
    //         Player 1 wins in 3 cases: 1 against 3, 2 against 1, 3 against 2.
    // TÂCHE 3 : Sinon, si le joueur 1 gagne, affiche : Player 1 wins!
    //           Le joueur 1 gagne dans 3 cas : 1 contre 3, 2 contre 1, 3 contre 2.
    //   Help / Aide : (player1 == 1 && player2 == 3) || ...

    // TASK 4: Else, display: Player 2 wins!
    // TÂCHE 4 : Sinon, affiche : Player 2 wins!



    // Tests: type 2 lines in STDIN (player 1, then player 2)
    // Tests : tape 2 lignes dans STDIN (joueur 1, puis joueur 2)
    //
    //   STDIN 1 / 3  ->  Player 1 wins!
    //   STDIN 2 / 1  ->  Player 1 wins!
    //   STDIN 3 / 1  ->  Player 2 wins!
    //   STDIN 2 / 2  ->  Draw!
    //   STDIN 4 / 1  ->  Invalid choice!
    //   STDIN 1 / 0  ->  Invalid choice!

    return 0;
}
