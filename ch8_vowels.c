// #include<stdio.h>

// int countVowels(char str[]);

// int main(){

//     char str[500];

//     // int consonants = str[500];
//     //     consonants = str[500] - countVowels(str);


//     printf("Enter a word : ");
//     scanf("%s", &str);


//     printf("No. of vowels are : %d \n", countVowels(str));

//         // printf("No. of consonants are : %d \n", &consonants);

//         // how do i print the number of consonats here ???????????????????????????????????????????????????


// }


// int countVowels(char str[]){
//     int count = 0;

//     for(int i = 0; str[i] != '\0'; i++){
//         if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             count++;

            
//         }


//     }
    
//     return count;

// }



















// something went wrong ???????



// check whether character present or not


#include<stdio.h>

int checkCharacter(char str[]);

int main(){

    char str[500];

    
    printf("Enter a word : ");
    scanf("%s", &str);


    printf("No. of vowels are : %s \n", checkCharacter(str));

       

}


int checkCharacter(char str[]){
    

    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] == 'c' ){
           printf("present");
           return;         

            
        }
            printf("not present");
           
        


    }
    
    
}