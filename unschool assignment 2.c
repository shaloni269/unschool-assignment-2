#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , sum=0 , n=6;

    for (i=1;n!=0;i++)
    {
        printf("enter a number:");
        scanf("%d",&n);
        sum=sum+n;
    }
    printf("sum of the numbers is %d" , sum);


    return 0;
}
