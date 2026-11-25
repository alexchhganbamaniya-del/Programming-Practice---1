
#include<stdio.h>
#include<conio.h>

int armstrong(int n)
{
    int temp, rem, sum = 0;
    int digits = 0, i, power;
    temp = n;

    if(n < 0)
        return 0;

    do
    {
        digits++;
        temp = temp / 10;
    } while(temp != 0);

    temp = n;

    do
    {
        rem = temp % 10;
        power = 1;

        for(i = 1; i <= digits; i++)
            power = power * rem;

        sum = sum + power;
        temp = temp / 10;
    } while(temp != 0);

    if(sum == n)
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

    if(armstrong(n) == 1)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    getch();
}

