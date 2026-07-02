// Online C compiler to run C program online
#include <stdio.h>

int main() {
        double num1;
        double num2;
        char op;

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter operator: ");
        scanf(" %c", &op);
        printf("Enter first number: ");
        scanf("%lf", &num2);

        if( op == '+'){
            printf("Answer: %lf", num1 + num2);
        }else if( op == '-'){
            printf("Answer: %lf", num1 - num2);
        }else if( op == '*'){
            printf("Answer: %lf", num1 * num2);
        }else if( op == '/'){
            printf("Answer: %lf", num1 / num2);
        }else{
            printf("Invalid operator!");
        }



}

