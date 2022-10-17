// Write a C program to take one positive integer as input and print double of it.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    // calculating multiply
    int multiply = a*2;

    printf("Print the value is: %d", multiply);
    return 0;
}