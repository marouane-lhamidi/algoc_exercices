#include <iostream>

int main()
{
    // To ride the roller coaster, you need BOTH:
    //   - 12 years old or more
    //   - 140 cm or more
    // Pour monter dans le manège, il faut les DEUX :
    //   - 12 ans ou plus
    //   - 140 cm ou plus
    int age = 13;
    int height = 150;


    // TASK 1: Write an if / else with && (and):
    //           - both rules are OK  ->  display: You can ride!
    //           - else               ->  display: Sorry, not this time.
    // TÂCHE 1 : Écris un if / else avec && (et) :
    //           - les deux règles sont OK  ->  affiche : You can ride!
    //           - sinon                    ->  affiche : Sorry, not this time.



    // TASK 2: Test the 4 cases. Only ONE case can ride!
    // TÂCHE 2 : Teste les 4 cas. Un SEUL cas peut monter !
    //
    //   age = 13, height = 150  ->  You can ride!
    //   age = 13, height = 130  ->  Sorry, not this time.
    //   age = 10, height = 150  ->  Sorry, not this time.
    //   age = 10, height = 130  ->  Sorry, not this time.

    // TASK 3: Replace && with || and test the 4 cases again. What changes? Is it still a good rule?
    // TÂCHE 3 : Remplace && par || et teste encore les 4 cas. Qu'est-ce qui change ? Est-ce encore une bonne règle ?

    return 0;
}
