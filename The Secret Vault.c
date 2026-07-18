#include <stdio.h>
int main(){

    int i;
    do{
        printf("type your password: ");
        scanf("%d", &i);
        if(i != 1234){
        printf("WRONG PASSWORD!\n\n");
        }
    }while(i != 1234);

    printf("Open!");




}
