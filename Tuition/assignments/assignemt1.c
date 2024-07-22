#include<stdio.h>

// 1. Design a flowchart/ Algorithm for a basic calculator that accepts
// two numbers and an operator (+, -, *, /) as input from the user and
// performs the corresponding operations, and displaying/print the
// result.

int main () {

    int n1, n2, result;
    char operator;

   try again: printf("Enter the first number : ");
    scanf("%d", &n1);
    printf("Enter the operator(+,-,*,/) : ");
    scanf(" %c", &operator);
    // if(operator != "+" || operator != "-" || operator != "*" || operator != "/"){
    //     printf("Invalid Operator");
    // }
     if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
        printf("Invalid Operator\n");
        goto try again;
    }
    printf("Enter the second number : ");
    scanf("%d", &n2);

    switch (operator)
    {
        case '+': 
            result = n1 + n2;    
            break;
        case '-': 
            result = n1 - n2;    
            break;
        case '*': 
            result = n1 + n2;    
            break;
        case '/': 
            if (n2 != 0)
                result = n1 / n2;
            else {
                printf("Division by zero not possible: ERROR");
                return 1;
            }
            break; 
        default: 
            printf("Wrong input");
            return 1;
    }

    printf("The result is: %d\n", result);

    return 0;
}
