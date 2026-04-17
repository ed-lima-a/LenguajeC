#include <stdio.h>

/*  imprime la tabla Fahrenhit-Celsius
    para fahr = 0, 20, ..., 300; versión de punto flotante */

    //Ejercicio 1-4

    int main()
    {
        float fahr, celsius;
        int lower, upper, step;

        lower = 0;            /*Límite superior de la tabla de temperaturas*/
        upper = 300;          /*Límite superior*/
        step = 20;            /*Tamaño del incremento*/

        celsius=lower;
        
        printf("%12s %17s\n","Celsius", "Fahrenheit");  /*Título de tabla*/

        while (celsius <= upper) {
            fahr = (9.0/5.0) * (celsius) + 32;
            printf("%8.0f %cC %13.0f %cF\n", celsius, 248, fahr, 248);
            celsius = celsius + step;
        }

        //getchar(); // espera una tecla
        return 0;
    }