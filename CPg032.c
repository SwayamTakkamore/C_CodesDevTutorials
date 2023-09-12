// Write a C program to find the circumference of a circle
#include <stdio.h>
void main() 
{
    float r, c, pi=3.1415;
    
    printf("Enter the Radius : ");
    scanf("%f",&r);
    c = 2*pi*r;
    printf("\nThe Circumference is %.3f",c);
}
