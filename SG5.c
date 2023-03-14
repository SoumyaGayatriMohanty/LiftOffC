#include<stdio.h>
void main()
{
    int r,d,c,a;
    printf("Enter the radius of circle");
    scanf("%d",&r);
    d=2*r;
    c=2*3.14*r;
    a=3.14*3.14*r;
    printf("The diameter of the circle=%d\n",d);
    printf("The circumference of the circle=%d\n",c);
    printf("The area of the circle=%d",a);
}