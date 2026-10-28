#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 0;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
/*
PS D:\Phoenix\Git_VS\stage1-c-practice> gcc -Wall -Wextra -g exercises/test/scanf_func_test.c -o build/scanf_func_test.exe
PS D:\Phoenix\Git_VS\stage1-c-practice> .\build\scanf_func_test.exe
Enter first number: 10 20
Enter second number: a = 10, b = 20
PS D:\Phoenix\Git_VS\stage1-c-practice>
*/