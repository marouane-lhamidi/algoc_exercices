#include <iostream>

int main()
{
    int day;

    std::cout << "Which day is it (1 to 7)? ";
    std::cin >> day;
    std::cout << std::endl;


    // TASK 1: With ONE switch, display:
    //           - days 1, 2, 3, 4, 5  ->  School day
    //           - days 6, 7           ->  Weekend!
    //           - other number        ->  Invalid day!
    // TÂCHE 1 : Avec UN seul switch, affiche :
    //           - jours 1, 2, 3, 4, 5  ->  School day
    //           - jours 6, 7           ->  Weekend!
    //           - autre nombre         ->  Invalid day!
    //
    //   Help / Aide : several cases can share the same block
    //                 plusieurs case peuvent partager le même bloc
    //       case 6:
    //       case 7:
    //           std::cout << "Weekend!" << std::endl;
    //           break;



    // TASK 2: Type a day in STDIN, then click Run.
    // TÂCHE 2 : Tape un jour dans STDIN, puis clique sur Run.
    //
    //   STDIN 2  ->  School day
    //   STDIN 5  ->  School day
    //   STDIN 6  ->  Weekend!
    //   STDIN 7  ->  Weekend!
    //   STDIN 0  ->  Invalid day!

    return 0;
}
