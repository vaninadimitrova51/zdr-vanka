#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(){

    int x;
    int y;
    int a = 0, b = 0;
    int r = 2;
    int c = 1;


    printf("Enter the value of x: \n");
    scanf("%d", &y);

    printf("Enter the value of y: \n");
    scanf("%d", &x);


    if((x - a)*(x - a) + (y - b)*(y - b) < (r * r)){
        printf("Point is in circle \n");
    }else if((x - a)*(x - a) + (y - b)*(y - b) > (r * r)){
        printf("Point is not in circle\n");
    }

    if(pow(x, 2) + pow(y, 2) <= pow(c, 2) + pow(r, 2)){
        printf("Point is in the gray part \n");
    }else if(pow(x, 2) + pow(y, 2) > pow(c, 2) + pow(r, 2)){
        printf("Point is not in the gray part");
    }





    return 0;
}


