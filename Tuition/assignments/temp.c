#include<stdio.h>

int main(){

int fer, cel;
float F, C;
char condition;

restart: printf("Want to convert from C to F ? (Y/N)\n");
scanf("%c", &condition);

if(condition == 'Y'){
    printf("Enter value in C you want to convert into F.");
    scanf("%d", &cel);
    F = ((9/5)*cel)+32;
    printf("The value in F is : %f", F);
}
if(condition == 'N'){
     printf("Enter value in F you want to convert into C.");
    scanf("%d", &fer);
    C = (5/9)*(F - 32);
    printf("The value in C is : %f", C);
}
else{
    printf("Invalid Input");
    goto restart;
}
}