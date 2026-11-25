
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    double n, ans;
    clrscr();

    printf("Enter number: ");
    scanf("%lf", &n);

    if(n < 0)
        printf("Invalid number");
    else
    {
        ans = sqrt(n);
        printf("Square Root = %.2f", ans);
    }

    getch();
}

