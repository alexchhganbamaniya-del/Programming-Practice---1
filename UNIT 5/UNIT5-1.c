
#include<stdio.h>
#include<conio.h>

int add(int a, int b)
{
    return a + b;
}

void main()
{
    int a, b, ans;
    clrscr();

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    ans = add(a, b);

    printf("Addition = %d", ans);

    getch();
}
