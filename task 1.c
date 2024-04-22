#include <stdio.h>

int main() 
{
    char operator;
    double num1, num2;

    printf("Enter an operator: ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+'://ADD
            printf("%.lf + %.lf = %.lf", num1, num2, num1 + num2);
            break;
        case '-'://SUBTRACTION
            printf("%.lf - %.lf = %.lf", num1, num2, num1 - num2);
            break;
        case '*'://MULTIPLY
            printf("%.lf * %.lf = %.lf", num1, num2, num1 * num2);
            break;
        case '/'://DIVIDE
            if (num2 != 0)
                printf("%.lf / %.lf = %.lf", num1, num2, num1 / num2);
            else
                printf("Error! Division by zero.");
            break;
        default:
            printf("Error! Invalid operator.");
    }

    return 0;
}