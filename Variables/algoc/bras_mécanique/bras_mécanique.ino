#include <algoC.h>

void application(ALGOC_APP)
{
    // 1. Cree une variable "vitesse" avec la valeur 2.


    // 2. Cree une variable "duree" avec la valeur 0.5.


    // 3. Fais tourner le moteur A.
    move(ALGOC, 'A', duree, vitesse, CW, true);

    // 4. Change la valeur de "vitesse" a 4.


    // 5. Fais tourner le moteur une deuxieme fois.
    move(ALGOC, 'A', duree, vitesse, CW, true);
}
