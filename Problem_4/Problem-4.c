// Write a C program to take two positive integers as input and show the summation, subtraction and multiplication of those two numbers.
#include<stdio.h>>
int main()
{
    int a, b, summation;
    printf("Enter number: ");
    scanf("%d%d", &a,&b);
    // calculating summation
    summation = a + b;
    printf("The sum is: %d", summation);
    return 0;
}