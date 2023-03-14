#include<stdio.h>
void main()
{
    int x,y;
    for(x=1;x<=100;x++)
    {
    if(x%3==0)
    {
        printf("Fizz\n");
    }
    else if(x%5==0)
    {
        printf("Buzz\n");
    }
    else
    {
        printf("Invalid Number");
    }
    }
}