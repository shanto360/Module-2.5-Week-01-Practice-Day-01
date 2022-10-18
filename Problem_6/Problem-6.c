// Write a C program to take integer value as input and print that value. There is a twist! The input will contain a % sign.
#include<stdio.h> 
int main()
{
    int a;
    printf("simple input: ");
    scanf("%d%c", &a);
    printf("simple output: ");
    scanf("%d", a);
    return 0;
}