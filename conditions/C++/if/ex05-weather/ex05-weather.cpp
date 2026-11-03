#include <iostream>

int main()
{
    int temperature;

    std::cout << "What is the temperature today? ";
    std::cin >> temperature;
    std::cout << std::endl;


    // TASK 1: If temperature is less than 10, display: Take a coat!
    // TÂCHE 1 : Si temperature est plus petite que 10, affiche : Take a coat!



    // TASK 2: If temperature is greater than 30, display: Drink some water!
    // TÂCHE 2 : Si temperature est plus grande que 30, affiche : Drink some water!



    std::cout << "Have a nice day" << std::endl;


    // TASK 3: Type a number in the STDIN box, then click Run. Try these 3 tests:
    // TÂCHE 3 : Tape un nombre dans la zone STDIN, puis clique sur Run. Fais ces 3 tests :
    //
    //   STDIN 5   ->  Take a coat!       +  Have a nice day
    //   STDIN 20  ->  Have a nice day
    //   STDIN 35  ->  Drink some water!  +  Have a nice day

    return 0;
}
