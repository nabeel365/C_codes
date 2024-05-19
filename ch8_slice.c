#include<stdio.h>

void slice(char str[], int n, int m);

int main(){

    printf("Enter data : ");
    char str[500];
    scanf("%s", &str);


    // char str[] = "Heloo";     
    // also u can store a fixed data

    slice(str, 3, 6);
}


void slice(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for(int i = n; i <= m; i++, j++){
        newStr[j] = str[i];

    }

    newStr[j] = '\0';
    puts(newStr);

}