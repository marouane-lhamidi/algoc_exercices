#include <iostream>

int main()
{
    // FINAL CHALLENGE: what kind of triangle?
    // DÉFI FINAL : quel genre de triangle ?
    //
    // A triangle is possible only if EACH side is smaller than the sum of the 2 other sides.
    // Un triangle est possible seulement si CHAQUE côté est plus petit que la somme des 2 autres côtés.
    //   a < b + c   AND / ET   b < a + c   AND / ET   c < a + b
    //
    // Kinds of triangles / Genres de triangles :
    //   - equilateral / équilatéral : the 3 sides are equal  /  les 3 côtés sont égaux
    //   - isosceles / isocèle       : exactly 2 sides are equal  /  exactement 2 côtés sont égaux
    //   - scalene / quelconque      : the 3 sides are different  /  les 3 côtés sont différents

    int a;
    int b;
    int c;

    std::cout << "Type the 3 sides: ";
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cout << std::endl;


    // TASK 1: If the triangle is NOT possible, display: This is not a triangle!
    // TÂCHE 1 : Si le triangle n'est PAS possible, affiche : This is not a triangle!
    //   Help / Aide : NOT possible = one of the 3 rules is false  /  PAS possible = une des 3 règles est fausse

    // TASK 2: Else, display the kind of triangle: Equilateral, Isosceles or Scalene
    // TÂCHE 2 : Sinon, affiche le genre de triangle : Equilateral, Isosceles ou Scalene
    //   Help / Aide : check equilateral BEFORE isosceles  /  vérifie équilatéral AVANT isocèle



    // Tests: type 3 lines in STDIN
    // Tests : tape 3 lignes dans STDIN
    //
    //   STDIN 5 / 5 / 5   ->  Equilateral
    //   STDIN 5 / 5 / 8   ->  Isosceles
    //   STDIN 8 / 5 / 5   ->  Isosceles
    //   STDIN 3 / 4 / 5   ->  Scalene
    //   STDIN 1 / 2 / 10  ->  This is not a triangle!
    //   STDIN 2 / 3 / 5   ->  This is not a triangle!

    return 0;
}
