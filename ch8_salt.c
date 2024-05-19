    // Find the salted form of  a password by user if the salt is "123" and added at the end.


#include<stdio.h>
#include<string.h>


void salting(char password[]);

int main(){

    printf("Enter your Password : ");

    char password[100];
    scanf("%s", password);
    salting(password);

}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}