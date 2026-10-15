#include <stdio.h>

int main(void)
{
    int price,quantity,total;

    price=35;
    quantity=7;
    total=price*quantity;

    printf("Original total : %d\n",total);

    if(total>=200)
    {
        total=total-20;
    }


    printf("Final total: %d \n",total);

    return 0;
    
}