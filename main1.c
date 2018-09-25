#include<stdio.h>
#include<conio.h>
void main()
{
printf("There is a super calc at work");
printf("hi drishya");
printf("what's up");
printf("do u want to do calculations");
printf("you want to add or subtract");
printf("so you want to do addition")
int n, i, sum = 100;
printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;



}

