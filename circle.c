#include<stdio.h>
int main()
{
    float radius,diameter,circumference,area;
    printf("enter radius of circle: ");
    scanf("%f",&radius);
    diameter=2*radius;
    circumference=2*3.14*radius;
    area=3.14*(radius*radius);
    printf("diameter of circle=%f units \n",diameter);
    printf("circumference of circle=%f units \n",circumference);
    printf("area of circle=%f sq. units",area);
    return 0;
}