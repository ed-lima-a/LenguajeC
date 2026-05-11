#include <stdio.h>

/*  imprime la tabla Fahrenhit-Celsius
    para fahr = 0, 20, ..., 300; versión de punto flotante */
    int main()
    {
        float fahr, celsius;
        int lower, upper, step;

        lower = 0;            /*Límite superior de la tabla de temperaturas*/
        upper = 300;          /*Límite superior*/
        step = 20;            /*Tamaño del incremento*/

        fahr=lower;
        
        //Ejercicio 1-3
        printf("%10s %15s\n","Fahrenheit", "Celsius");  /*Título de tabla*/

        while (fahr <= upper){
            celsius = (5.0/9.0) * (fahr-32.0);
            printf("%10.0f %15.2f\n", fahr, celsius); //printf : print format
            fahr = fahr + step;
        }

        //getchar(); // espera una tecla
        return 0;
    }