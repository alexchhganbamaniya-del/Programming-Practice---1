
#include<stdio.h>
#include<conio.h>

float circle(float r)
{
    return 3.14 * r * r;
}

void main()
{
    float r;
    clrscr();

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Area = %.2f", circle(r));

    getch();
}

