#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
char la;
for (la = 'a'; la <= 'z'; la++)
{
if (la != 'e' && la != 'q')
purtchar(la);
}
putchar('\n')
return (0)
}
