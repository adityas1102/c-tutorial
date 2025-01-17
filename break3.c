#include<stdio.h>
int main()
{
     int num,sum=0;

     printf("Enter the calculate the sum::Enter a negative number to stop:\n");


     while (num)
     {
        printf("Enter the number:");
        scanf("%d",&num);

        if( num<0)
        {
            break;
        }
        sum += num;
     }
     
        printf(" the final sum is: %d\n",sum);

}