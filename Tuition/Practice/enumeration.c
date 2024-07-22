#include <stdio.h>

// Define an enumeration for the days of the week
enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

void printDay(enum week day) {
    switch(day) {
        case Sunday: 
            printf("Sunday\n");
            break;
        case Monday: 
            printf("Monday\n");
            break;
        case Tuesday: 
            printf("Tuesday\n");
            break;
        case Wednesday: 
            printf("Wednesday\n");
            break;
        case Thursday: 
            printf("Thursday\n");
            break;
        case Friday: 
            printf("Friday\n");
            break;
        case Saturday: 
            printf("Saturday\n");
            break;
        default: 
            printf("Invalid day\n");
    }
}

int main() {
    enum week today = Sunday;
    printDay(today);

    // You can also assign enum values directly using their integer equivalents
    enum week tomorrow = (today + 1) % 7;
    printDay(tomorrow);

    return 0;
}
