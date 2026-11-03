#include <iostream>

int main()
{
    // CHALLENGE: the museum ticket
    // DÉFI : le billet du musée
    //
    // Prices / Prix :
    //   - FREE for children under 4 OR people aged 65 or more
    //     GRATUIT pour les enfants de moins de 4 ans OU les personnes de 65 ans ou plus
    //   - 20 DH on Wednesday (day 3) for people under 18
    //     20 DH le mercredi (jour 3) pour les moins de 18 ans
    //   - else: 50 DH  /  sinon : 50 DH
    //
    // Days / Jours : 1 = Monday / lundi ... 7 = Sunday / dimanche

    int age;
    int day;

    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "Which day is it (1 to 7)? ";
    std::cin >> day;
    std::cout << std::endl;

    int price = 50;


    // TASK 1: With if / else if, put the right value in price. Use || and &&.
    // TÂCHE 1 : Avec if / else if, mets la bonne valeur dans price. Utilise || et &&.



    // TASK 2: If price is 0, display: Free entry!
    //         Else, display the price, for example: Price: 20 DH
    // TÂCHE 2 : Si price vaut 0, affiche : Free entry!
    //           Sinon, affiche le prix, par exemple : Price: 20 DH



    // Tests: type 2 lines in STDIN (age, then day)
    // Tests : tape 2 lignes dans STDIN (l'âge, puis le jour)
    //
    //   STDIN 3 / 5   ->  Free entry!
    //   STDIN 70 / 3  ->  Free entry!
    //   STDIN 10 / 3  ->  Price: 20 DH
    //   STDIN 10 / 5  ->  Price: 50 DH
    //   STDIN 30 / 3  ->  Price: 50 DH

    return 0;
}
