#include <iostream>

int main()
{
    // CHALLENGE: find the biggest of 3 numbers, using only if
    // DÉFI : trouve le plus grand de 3 nombres, avec seulement des if

    int a;
    int b;
    int c;

    std::cout << "Type 3 numbers: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << std::endl;

    // Idea: we suppose that a is the biggest, then we check b and c
    // Idée : on suppose que a est le plus grand, puis on vérifie b et c
    int biggest = a;


    // TASK 1: If b is greater than biggest, put b in biggest.
    // TÂCHE 1 : Si b est plus grand que biggest, mets b dans biggest.



    // TASK 2: Do the same with c.
    // TÂCHE 2 : Fais la même chose avec c.



    // Display the result / Affiche le résultat
    std::cout << "The biggest number is " << biggest << std::endl;


    // Tests: type 3 lines in STDIN
    // Tests : tape 3 lignes dans STDIN
    //
    //   STDIN 4 / 9 / 2  ->  The biggest number is 9
    //   STDIN 8 / 3 / 5  ->  The biggest number is 8
    //   STDIN 1 / 6 / 7  ->  The biggest number is 7
    //
    // TASK 3 (bonus): change the program to find the SMALLEST number.
    // TÂCHE 3 (bonus) : change le programme pour trouver le PLUS PETIT nombre.

    return 0;
}
