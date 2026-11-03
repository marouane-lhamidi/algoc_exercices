#include <iostream>

int main()
{
    // In ex04, we used 2 if for the door code. Now we can do it with if / else!
    // Dans ex04, on a utilisé 2 if pour le code de la porte. Maintenant on peut le faire avec if / else !
    int code = 1111;

    if (code == 1234)
    {
        std::cout << "Door open!" << std::endl;
    }
    if (code != 1234)
    {
        std::cout << "Wrong code, the door stays closed." << std::endl;
    }


    // TASK 1: Replace the second if with an else. The program must display the same messages.
    // TÂCHE 1 : Remplace le deuxième if par un else. Le programme doit afficher les mêmes messages.

    // TASK 2: Test with code = 1111, then code = 1234.
    // TÂCHE 2 : Teste avec code = 1111, puis code = 1234.
    //
    //   code = 1111  ->  Wrong code, the door stays closed.
    //   code = 1234  ->  Door open!

    // Question: why is else better here than a second if?
    // Question : pourquoi else est mieux ici qu'un deuxième if ?

    return 0;
}
