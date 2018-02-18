#include <stdio.h>
#include <stdlib.h>


int main(){

    int x;
    int y;

    printf("What's the first number? \n");
    scanf("%d", &x);


    printf("What's the second number? \n");
    scanf("%d", &y);

    if (x < 2 && y < 2){
        printf("point (%d, %d) falls into the gray part\n");
    }else if (x > 2 && y > 2){
        printf("point (%d, %d) doesn't falls into the gray part\n");
    }else if (x > -2  && y < 2){
        printf("point (%d, %d) falls into the gray part\n");
    }else if (x < -2 && y > 2){
        printf("point (%d, %d) doesn't falls into the gray part\n");
    }else if (x >= -1 && y >= -2){
        printf("point (%d, %d) falls into the gray part\n");
    }else if (x < -1 && y < -2){
        printf("point (%d, %d) doesn't falls into the gray part\n");
    }else if (x <= 1 && y >= -2){
        printf("point (%d, %d) falls into the gray part\n");
    }else if (x > 1 && y < -2){
        printf("point (%d, %d) doesn't falls into the gray part\n");
    }

    return 0;
}




