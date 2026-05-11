#include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius */

#define LOWER 0     /* limite inferior de la tabla*/
#define UPPER 300   /* limite superior*/
#define STEP 20     /* tamaño del incremento*/

int main()
{
    int fahr;
    //Ejercicio 1-5
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)

    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}