#include <stdio.h>
int main() 
{
    int limit;

    printf("Enter an integer limit: ");
    scanf("%d", &limit);

    
    printf("Series of numbers from 1 to %d:\n", limit);
    for (int i = 1; i <= limit; i++)
     {
        printf("%d ", i);
     }

    printf("\n");
   
}
