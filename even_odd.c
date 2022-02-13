#include<stdio.h>
int main()
{
    int num;
    printf("enter any number to check even or odd: ");
    scanf("%d",&num);
    switch(num%2)
    {
        case 0:
        printf("number is even");
        break;
        case 1:
        printf("number is odd");
        break;
    }
    return 0;
}