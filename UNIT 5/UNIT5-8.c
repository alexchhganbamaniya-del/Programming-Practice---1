
#include<stdio.h>
#include<conio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

void main()
{
    int n;
    clrscr();

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if(n < 1 || n > 24)
        printf("Enter terms from 1 to 24");
    else
    {
        printf("Fibonacci Series: ");
        fibonacci(n);
    }

    getch();
}

