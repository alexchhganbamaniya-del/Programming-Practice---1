
#include<stdio.h>
#include<conio.h>

int palindrome(int n)
{
    int temp, rev = 0, rem;
    temp = n;

    while(n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(temp == rev)
        return 1;
    else
        return 0;
}

void main()
{
    int n;
    clrscr();

    printf("Enter number: ");
    scanf("%d", &n);

    if(palindrome(n) == 1)
        printf("Palindrome Number");
    else
        printf("Not Palindrome Number");

    getch();
}

