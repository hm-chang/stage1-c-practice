
#include <stdio.h>

int main(void)
{
    int input_number = 0;
    int result = 0;

    printf("Please enter an integer: ");

    result = scanf("%d", &input_number);

    if (result == 1)
    {
        printf("Valid integer: %d\n", input_number);
    }
    else if (result == 0)
    {
        printf("Invalid input: not an integer.\n");
    }
    else if (result == EOF)
    {
        printf("End of input (EOF).\n");
    }

    printf("scanf result = %d\n", result);

    return 0;
}
