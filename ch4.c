#include<stdio.h>

int main(){

    // Print the table of a number input by the user.

    // int n;
    // printf("Enter a number you want to print a table of : ");
    // scanf("%d \n", &n);

    // for (int i; i <= n; i++){
    //     i = i * i;
    //     printf("%d \n", i);
    // }


    // int n;
    // printf("Enter a number you want to print a table of : ");
    // scanf("%d", &n);

    // for (int i= 10; i >= 1; i--){
     
    //     printf("%d \n", n*i);
    // }





    // 3:40:40 - print all the odd numbers from 5 to 50

    // for(int i = 5; i >= 5 && i <= 50; i++){
    //     if(i % 2 == 0)   // != , then continue not required
    //     continue;
    //     printf("%d \n", i );
    // }



// print the factorial of a number n
// int n = 3;

//  for(int i = 1; i <= n; i++){
        
//         i = i * i;

//         printf("%d \n", i );
//     }




// print reverse of the table for a number n.

// mistake ......................................................................................


    // int n;
    // printf("Enter a number ");
    // scanf("%d", &n);

    // for(int i; i <= n; i++){

    //     i = i * i;
    //     printf("%d \n", i);
    // }


// correct ......................................................................................

//  int n;
//     printf("Enter a number you want to print a table of : ");
//     scanf("%d", &n);

//     for (int i= 10; i >= 1; i--){
     
//         printf("%d \n", n*i);
//     }




// ---------------------------------------------------------------------------------------------------------------------------------


// calculate the sum of all numbers between 5 and 50 (including 5 and 50)

int sum = 0;

for(int i = 5; i <= 50; i++){

    sum = sum + i;
}

    printf("%d \n", sum);





    return 0;

}