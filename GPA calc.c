#include <stdio.h>

int main(){

    int a;

    printf("Type you mark: ");
    scanf("%d", &a);

    if( a >= 80){
        printf("You got GPA A+");
    }else if( a >= 70){
        printf("You got GPA A");
    }else if( a >= 60){
        printf("You got GPA A-");
    }else if( a >= 50){
        printf("You got GPA B");
    }else if( a >= 40){
        printf("You got GPA C");
    }else{
        printf("You failed!");
    }




}
