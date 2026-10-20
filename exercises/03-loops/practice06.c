#include <stdio.h>

int main(void)
{
    int sum=0,i=1;

    while (i<=100)
    {
        /* code */
        sum=sum+i;
        i++;
    }
    
    printf("Sum = %d\n",sum);


    return 0;
}