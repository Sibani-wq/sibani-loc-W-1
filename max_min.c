#include<stdio.h>
void main()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("%d number is greater and %d number is smaller",a,b);
    }
    else
    {
        printf("%d number is smaller and %d number is greater",a,b);
    }
    getch();
}
