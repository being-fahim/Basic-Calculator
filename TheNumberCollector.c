#include <stdio.h>

int main(){
    int n;
    int m = 0;

    printf("Enter a number(0 to end): ");
    scanf("%d", &n);

    while(n != 0){
        m = m + n;

        printf("Enter another number: ");
        scanf("%d", &n);
    }
    printf("SUM = %d", m);
}
