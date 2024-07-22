// #include<stdio.h>

// int main (){

//     // Each of these integer types can be either signed or unsigned:

// // unsigned int: Represents only non-negative integer values.
// // Example: 

// unsigned int count = 300;

// printf("Count: %u\n", count);


// // signed int: (default) Represents both negative and non-negative integer values.
// // Example:

// signed int temperature = -5;

// printf("Temperature: %d\n", temperature);



// }


// ...................................................................................................


// ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,

#include <stdio.h>

// Enumeration data type
enum day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

// Structure data type
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // Basic data types
    int age = 25;
    float height = 5.9f;
    double pi = 3.141592653589793;
    char grade = 'A';

    // Derived data types
    int numbers[5] = {1, 2, 3, 4, 5};
    int *ptr = &age;
    struct Person person = {"John Doe", 30, 5.8f};
    
    union Data {
        int i;
        float f;
        char str[20];
    } data;
    
    data.i = 10;

    // Void pointer
    void *voidPtr = &age;

    // Print values
    printf("Age: %d\n", age);
    printf("Height: %.1f\n", height);
    printf("Pi: %.15f\n", pi);
    printf("Grade: %c\n", grade);
    printf("First number in array: %d\n", numbers[0]);
    printf("Pointer to age: %d\n", *ptr);
    printf("Person: %s, %d, %.1f\n", person.name, person.age, person.height);
    printf("Union data (int): %d\n", data.i);
    printf("Void pointer to age: %d\n", *(int *)voidPtr);

    return 0;
}



