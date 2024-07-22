#include<stdio.h>

#define PI 3.14

float process(float radius);

int main (){

float radius , area;
printf("Radius = ?\n");
scanf("%f", &radius);
area = process(radius);
printf("Area = %f", area);

}


float process(float r){
    float a;
    a = PI*r*r;
    return a;

}