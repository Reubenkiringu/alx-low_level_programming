/*
 * File: 1-swap.c
 * Auth: Fade
 */

#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The first interger to be swapped.
 * @b: The second interger to be swapped.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
