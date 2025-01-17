#include<stdio.h>
int main()
{
    int n , factorail=1  ;
    printf("enter the positive number:" );
    scanf("%d",&n);

    if(n < 0)
    {
        printf("factorail of negative number is not defined.\n");
    }
    else
    {
        for( int i=1;i<=n;i++)
        {
            factorail *= i;
        }
        printf("the factorail number of %d is:%d\n",n,factorail );
    }
}