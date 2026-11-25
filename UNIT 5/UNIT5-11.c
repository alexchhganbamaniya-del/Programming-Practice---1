
#include<stdio.h>
#include<conio.h>

#define SQUARE(x) ((x)*(x))

void main()
{
    int n;
    clrscr();

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square = %d", SQUARE(n));

    getch();
}

