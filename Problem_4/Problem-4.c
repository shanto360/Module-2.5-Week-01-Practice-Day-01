// Write a C program to take two positive integers as input and show the summation, subtraction and multiplication of those two numbers.
#include<stdio.h>>
int main()
{
    int a, b, summation, subtraction, multiplication;
    printf("Enter number: ");
    scanf("%d%d", &a,&b);
    // calculating summation
    summation = a + b;
    // calculating subtraction
    subtraction = a - b;
    // calculating multiplication
    multiplication = a * b;
    printf("The summation is: %d \n", summation);
    printf("The subtraction is: %d \n", subtraction);
    printf("The subtraction is: %d", multiplication);
    return 0;
}