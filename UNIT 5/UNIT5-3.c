
#include<stdio.h>
#include<conio.h>

int reverse(int n)
{
    int rev = 0, rem;

    while(n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return rev;
}

void main()
{
    int n;
    clrscr();

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Reverse = %d", reverse(n));

    getch();
}
