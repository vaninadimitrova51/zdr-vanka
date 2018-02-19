#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

    int x;
    int y;
    int a = 0, b = 0;
    int r = 2;


    printf("Enter the value of x: \n");
    scanf("%d", &y);

    printf("Enter the value of y: \n");
    scanf("%d", &x);


    if((x - a)*(x - a) + (y - b)*(y - b) < (r * r)){
        printf("Point is in circle");
    }else if((x - a)*(x - a) + (y - b)*(y - b) > (r * r)){
        printf("Point is not in circle");
    }



    return 0;
}


