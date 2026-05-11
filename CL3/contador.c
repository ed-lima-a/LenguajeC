#include <stdio.h>

/*cuenta los caracteres de la entrada, 1a. Version*/
/*
int main()
{
    long nc = 0;
    
    while (getchar() != EOF){
        ++nc;
    }

    printf("Se leyeron %ld caracteres\n",nc);
    
    return 0;
}
    */
//------------------------------------------------------------------//

/*cuenta los caracteres de la entrada, 1a. Version*/

int main()
{
    double nc;
    
    for(nc=0; getchar() != EOF; ++nc){
        ;
    printf("%.0f\n", nc);
    }
    
    return 0;
}