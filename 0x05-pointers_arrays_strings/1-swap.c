#include "main.h"
/**
 * swap_int - swaps the value of two intergers
 * @a: interger to swap
 * @b: interger to swap
 */
void swap_int(int *a, int *b)
/*the function that swap the value of two intergers.*/
{
int m;
m = *a;
*a = *b;
*b = m;
}
