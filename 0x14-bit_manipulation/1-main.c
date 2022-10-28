#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    print_binary(102);
    printf("\n");
    print_binary(75);
    printf("\n");
    print_binary(137);
    printf("\n");
    for (i = 40; i <= 50; i++)
    {
	    print_binary(i);
	    printf("\n");
    }
    print_binary(100);
    printf("\n");
    return (0);
}
