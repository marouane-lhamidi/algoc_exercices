#include <iostream>

int main()
{
    int carte = 7;

    // This line displays true / false instead of 1 / 0
    // Cette ligne affiche true / false au lieu de 1 / 0
    std::cout << std::boolalpha;


    // TASK 1: For each line, write your guess (true or false) in the comment, THEN click Run.
    // TÂCHE 1 : Pour chaque ligne, écris ta réponse (true ou false) dans le commentaire, PUIS clique sur Run.

    std::cout << "A: " << (carte > 3 && carte < 10) << std::endl;              // my guess / ma réponse :
    std::cout << "B: " << (carte > 3 && carte < 5) << std::endl;               // my guess / ma réponse :
    std::cout << "C: " << (carte < 3 || carte > 5) << std::endl;               // my guess / ma réponse :
    std::cout << "D: " << (carte < 3 || carte == 5) << std::endl;              // my guess / ma réponse :
    std::cout << "E: " << ((carte >= 2 && carte <= 4) || carte == 7) << std::endl;  // my guess / ma réponse :


    // TASK 2: How many good answers did you get? For each wrong one, explain why.
    // TÂCHE 2 : Combien de bonnes réponses as-tu ? Pour chaque erreur, explique pourquoi.

    // TASK 3: Change carte to 3, guess again, then click Run.
    // TÂCHE 3 : Change carte en 3, devine encore, puis clique sur Run.

    return 0;
}
