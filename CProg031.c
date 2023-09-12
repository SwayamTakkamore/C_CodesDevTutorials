// Write a C program to find area of a triangle
#include <stdio.h>
void main() 
{
    float b, h, a;
    
    printf("Base of Triangle : ");
    scanf("%f",&b);
    printf("Height of Triangle : ");
    scanf("%f",&h);
    a = 0.5*b*h;
    printf("\nThe Area of Triangle is %.3f",a);
}
