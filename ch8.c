
// Make a program that inputs users name and prints it length

#include<stdio.h>
#include<string.h>

int countLength(char arr[]);

int main(){

   char name[100];
//    printf("Enter your name :  ");
//    fgets(name, 100, stdin);

// comparison

char first[] = "apple";
char second[] = "xuava";

printf("%d\n", strcmp(second, first));



//    printf("Length is :  %d", countLength(name));
//    printf("Length is : %d", strlen(name));

   return 0;




}


int countLength(char arr[]){
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}
