#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

    int x;
    int y;
    int a = 0, b = 0;
    int r = 2;

    int * pX = &x;
    int * pY = &y;

    printf("Enter the value of x: \n");
    scanf("%d", pX);

    printf("Enter the value of y: \n");
    scanf("%d", pY);

    r = sqrt(pow((x - a), 2) + pow((y - b), 2));



    return 0;
}


