#include<stdio.h>
int main()
{
    int limit;
    printf("enter the number:");
    scanf("%d",&limit);

    printf("series of number from %d to 1:",limit);

    for(int i=limit;i>=1;i--)
    {
        printf("%d",i);


    }
    printf("\n");

}