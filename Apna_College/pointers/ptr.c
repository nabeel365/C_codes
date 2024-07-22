#include<stdio.h>

int main(){
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("\n %p", pptr);   // address of the pointer stored in this pointer

    printf("\n %p", **pptr);  // value

    printf("\n %p", &pptr);   // address of the pointer itself



}