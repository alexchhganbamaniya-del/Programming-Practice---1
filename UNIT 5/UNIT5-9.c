
#include<stdio.h>
#include<conio.h>

float rectangle(float l, float b)
{
    return l * b;
}

void main()
{
    float l, b;
    clrscr();

    printf("Enter length: ");
    scanf("%f", &l);

    printf("Enter breadth: ");
    scanf("%f", &b);

    printf("Area = %.2f", rectangle(l, b));

    getch();
}

