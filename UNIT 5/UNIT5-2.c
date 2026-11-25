
#include<stdio.h>
#include<conio.h>

long int fact(int n)
{
    long int f = 1;
    int i;

    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

void main()
{
    int n;
    clrscr();

    printf("Enter number: ");
    scanf("%d", &n);

    if(n < 0)
        printf("Factorial not defined");
    else
        printf("Factorial = %ld", fact(n));

    getch();
}
