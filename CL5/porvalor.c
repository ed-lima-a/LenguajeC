#include <stdio.h>

int f(int a){
    a=3;
    return a;
}

int main (int argc, char *argv[]){
    int original = 1;
    printf("%d %d\n", f(original), original);
    return 0;
}