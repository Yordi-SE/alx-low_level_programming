#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world nonne dndf fjdsjjfd dfdjkf";
    char *f = "qqq";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
