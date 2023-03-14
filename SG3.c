#include<stdio.h>
void main()
{
    int n,r,s=0,i;
    printf("Enter a Number");
    scanf("%d",&n);
    do
    {
        r=n%10;
        n=n/10;
        s=s+r;
        i++;
    } while (n>0);
    printf("Sum=%d",s);
    
}