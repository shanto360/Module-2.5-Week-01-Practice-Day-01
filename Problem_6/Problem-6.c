// Write a C program to take integer value as input and print that value. There is a twist! The input will contain a % sign.
#include<stdio.h> 
int main()
{
    int a;
    printf("simple input: ");
  char b;
    scanf("%d%c", &a,&b);
    printf("simple output: ");
    printf("%d", a);
    return 0;
}