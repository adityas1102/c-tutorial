#include<stdio.h>
int main()
{
int n;
printf("Enter the number whose table you want to print: ");
scanf("%d", &n);



printf("multiplication table of %d:\n",n);
for(int i=1; i<=10; i++)
{
    printf("%d*%d = %d\n",n,i, (n*i));
}

}