#include<stdio.h>
void main()
{
    int m,n;
    char c;
    printf("Enter any two variables\n");
    scanf("%d %d",&m,&n);
    printf("Enter an operator\n");
    fflush(stdin);
    scanf("%c",&c);
    switch(c)
    {
        case'+':
        printf("sum=%d",m+n);
        break;
        case'-':
        printf("substraction=%d",m-n);
        break;
        case'*':
        printf("multiplication%d",m*n);
        break;
        case'/':
        printf("Division%d",m/n);
        break;
        case'%':
        printf("modulus%d",m%n);
        break;
        default:
        printf("Invalid operator");
        break;
    }
}