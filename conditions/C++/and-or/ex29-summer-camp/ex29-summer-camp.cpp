#include <iostream>

int main()
{
    // CHALLENGE: the summer camp
    // DÉFI : la colonie de vacances
    //
    // To be accepted, you need / Pour être accepté, il faut :
    //   - an age from 10 to 14  /  un âge de 10 à 14 ans
    //   - a grade of 12 or more  /  une note de 12 ou plus

    int age;
    int grade;

    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "What is your grade (out of 20)? ";
    std::cin >> grade;
    std::cout << std::endl;


    // TASK 1: With if / else if / else, display ONE message:
    //           - the age is NOT from 10 to 14  ->  Sorry, the camp is for 10 to 14 years old.
    //           - the grade is less than 12     ->  Sorry, you need a grade of 12 or more.
    //           - else                          ->  Welcome to the summer camp!
    // TÂCHE 1 : Avec if / else if / else, affiche UN seul message :
    //           - l'âge n'est PAS de 10 à 14 ans  ->  Sorry, the camp is for 10 to 14 years old.
    //           - la note est plus petite que 12  ->  Sorry, you need a grade of 12 or more.
    //           - sinon                           ->  Welcome to the summer camp!
    //   Help / Aide : "NOT from 10 to 14" = less than 10 OR more than 14
    //                 « PAS de 10 à 14 » = moins de 10 OU plus de 14



    // Tests: type 2 lines in STDIN (age, then grade)
    // Tests : tape 2 lignes dans STDIN (l'âge, puis la note)
    //
    //   STDIN 12 / 15  ->  Welcome to the summer camp!
    //   STDIN 9 / 18   ->  Sorry, the camp is for 10 to 14 years old.
    //   STDIN 16 / 14  ->  Sorry, the camp is for 10 to 14 years old.
    //   STDIN 11 / 8   ->  Sorry, you need a grade of 12 or more.
    //   STDIN 14 / 12  ->  Welcome to the summer camp!

    return 0;
}
