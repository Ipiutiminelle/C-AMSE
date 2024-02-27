#include <stdio.h>
#include <math.h>

/*....................*/
/* variables globales */
/*....................*/
double K;     /* ->gain statique   */
double tau;   /* ->constante de temps  */
double Te;    /* ->période d'échantillonnage  */
double T;     /* ->période T du signal carré */
double duree; /* ->durée de simulation  */

int checkEntrée(seconde){

}; /* check si l'entrée est 0 ou 1 en fonctiond des secondes*/

int main(int argc, char *argv[])
{

    double y0 = 0; /*sortie seconde 0*/
    double yk = 0; /*sortie seconde k*/
    double z0 = 0; /*exp(-Te/tau)*/
    double a0 = 0; /*K(1-z0)*/
    int uk = 0;    /*entrée*/
    double seconde = 0;

    z0 = exp(-Te / tau);
    a0 = K * (1 - z0);

    for (int i = 0; i < duree; i++)
    {

        uk = checkEntrée(seconde);

        yk = yk * z0 + a0 * uk;

        seconde = seconde + Te;

        printf("temps :", seconde);
        printf("entrée :", uk);
        printf("sortie ", yk);
    };

    return 0;
}
