#include <stdio.h>

int main(void)
{
    int price,quantity,total;

    price=35;
    quantity=3;
    total=price*quantity;

    printf("Original total : %d\n",total);

        if(total>=200)
            total=total-20;
        else
            printf("No discount: \n");

    

    printf("Final total: %d \n",total);

    return 0;
    
}