#include <stdio.h>

int main(void){

    int numbers[5]={10,20,30,40,50};
    int i=0,temp=0,sum=0;

    for(i=0;i<5;i++){

        temp=numbers[i];
        sum=sum+temp;

    }

    printf("Sum =%d \n",sum);


    return 0;

}