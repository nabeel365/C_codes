// // Make a program to input student info from a user and eneter it to a file 

// #include<stdio.h>

// int main(){

//     FILE *fptr;
//     fptr = fopen("Student.txt", "w");

//     char name[100];
//     int age;
//     float cgpa;

//     printf("Enter your name : ");       
//     scanf("%s", &name);
//     printf("Enter your age : ");       
//     scanf("%d", &age);
//     printf("Enter your cgpa : ");       
//     scanf("%f", &cgpa);

//     fprintf(fptr, "Student's name - %s\t", name);
//     fprintf(fptr, "Student's age - %d\t", age);
//     fprintf(fptr, "Student's cgpa - %f\t", cgpa);

//     fclose(fptr);

// }










// // ....................................................................................................................



#include<stdio.h>

int main(){
    FILE *fptr;

    fptr = fopen("Numbers.txt", "w");

    int n, i;
    printf("Enter a number");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        if(i%2 ==0){
            continue;
           
        }
         printf("%d", i);
         i = fgetc(fptr);
        
    }
    fclose(fptr);

    return 0;
}