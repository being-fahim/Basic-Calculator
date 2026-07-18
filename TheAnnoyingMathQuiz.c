#include <stdio.h>

int main(){
    int a,b,c,e;

    printf("input two number: ");
    scanf("%d %d", &a, &b);
    e = a+b;
    do{
        printf("what the answer of %d + %d: ", a, b);
        scanf("%d", &c);

        if(c != e){
            printf("Wrong answer! Type again.\n");
        }
    }while(c != e);
    printf("Right answer.");
}
