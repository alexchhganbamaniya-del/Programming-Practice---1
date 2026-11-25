
#include<stdio.h>
#include<conio.h>

int sumdigit(int n)
{
    int sum = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    return sum;
}

void main()
{
    int n;
    clrscr();

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d", sumdigit(n));

    getch();
}
