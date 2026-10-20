#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("Positive\n");
    }
    else if (number == 0) {
        printf("Zero\n");
    }
    else {
        printf("Negative\n");
    }

    return 0;
}