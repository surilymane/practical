//Program to create pointer and display the address and value.

#include <stdio.h>

int main()
{
    int a, *p1 = &a;
    float b, *p2 = &b;
    char c, *p3 = &c;

    printf("Enter the integer, float and character: ");
    scanf("%d %f %c",&a,&b,&c);

    printf("The address of a is: %p\nThe value of a is: %d\nThe address of b is: %p\nThe value of b is: %f\nThe address of c is: %p\nThe value of c is: %c",p1,*p1,p2,*p2,p3,*p3);
}
