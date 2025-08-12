#include <stdio.h>
#include <math.h>

int main(){

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("My Calculator_Program\n");

   printf("Enter the First Number: ");
    scanf("%lf", &num1);

    printf("Enter an operator(* / - +): ");
    scanf(" %c", &operator);

    printf("Enter the Second Number: ");
    scanf("%lf", &num2);
    
    switch(operator) {
        case'*':
            result = num1 * num2;
        break;
        case'/':
            if(num2 == 0){
                printf("You can't divide by zero");

            }
            else{
                result = num1 / num2;
            }
        break;
        
        case'-':
            result = num1 - num2;  
        break;

        case'+':
            result = num1 + num2;
        break;

        default:
        printf("Invalid operator\n");


    }
    printf("\nResult: %.2lf", result);


    return 0;
}