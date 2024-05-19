// // print sum of n natural numbers 

// #include<stdio.h>

// int sumNatural(int n);

// int main(){

// // int n;
// //     printf("Enter a natural number  : ");
// //     scanf("%d \n", &n);



//     // fucntion call 

// sumNatural(4);


//     return 0;
// }



// int sumNatural(int n){

//     int sum = 0;

//     for(int i =1; i <= n; i++ ){

//         sum = sum + i;

//     }

//     printf("%d \n", sum);
// }





// ............................................................................................................................


// fibonacci series

#include<stdio.h>


int fibboNacci(int n);


int main(){

fibboNacci(5);


    return 0;
}


int fibboNacci(int n){


for(int i = 0; i <= n; i++){

n = (n - i) + (n - 2);
// int sumNext = sum + i;

printf("%d \n", n);
 
}

}

// its a mistake, scope to learn more :)