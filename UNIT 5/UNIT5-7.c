
#include<stdio.h>
#include<conio.h>

int prime(int n)
{
    int i;

    if(n <= 1)
        return 0;

    for(i = 2; i <= n / i; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

void main()
{
    int n;
    clrscr();

    printf("Enter number: ");
    scanf("%d", &n);

    if(prime(n) == 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");

    getch();
}

