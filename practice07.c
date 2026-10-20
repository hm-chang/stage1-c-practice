#include <stdio.h>

int main(void)
{

    int sum=0,i=1;

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
/*
    while(i<=100)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
        i++;
    }
*/
    printf("Sum of even numbers= %d \n",sum);

    return 0;

}