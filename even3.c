#include<stdio.h>
int main()
{
    int num,even=0,odd=0;

    printf("enter the number:");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            even += i;  
        }
        else
        {
            odd += i;
        }
    }
    printf("the sum of even number from 1 to %d is: %d\n",num,even);
        printf("the sum of odd number from 1 to %d is: %d\n",num,odd);
}