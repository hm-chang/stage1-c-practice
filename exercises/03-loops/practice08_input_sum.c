#include <stdio.h>

int main(void){

    int input_number = 0,i = 0,sum = 0;
    int ch; 
    int has_extra = 0;

    while (1)
    {
        
        /*Clear has_extra last time */
        has_extra = 0;
        
        /*Get user's input to stdin*/
        printf("Please enter a positive integer: ");
        scanf("%d",&input_number);

        /* read user's input fron stdin until \n or EOF */
        ch = getchar();
        while (ch != '\n' && ch != EOF)
        {
            /*Codition that input is not an integer, has_extra = 1*/
            if(ch != ' ' && ch != '\t'){
                has_extra = 1;
            }
            ch = getchar();
        }
        

        if (input_number <= 0 || has_extra ==1){
            printf("\n Input is illegal! \n");
            continue;
        }
        else
            break;
    }
    


    for(i=1;i<=input_number;i++){
            // temp=input_number;
            // sum=sum+temp;

            sum=sum+i;
    }
    printf("\n Sum = %d \n",sum);


    return 0;

}