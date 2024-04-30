#include "../includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	tests_X(void)
{
	printf("Tests X: \n");
	ft_printf(" %X ", 0);
	ft_printf(" %X ", -1);
	ft_printf(" %X ", 1);
	ft_printf(" %X ", 9);
	ft_printf(" %X ", 10);
	ft_printf(" %X ", 11);
	ft_printf(" %X ", 15);
	ft_printf(" %X ", 16);
	ft_printf(" %X ", 17);
	ft_printf(" %X ", 99);
	ft_printf(" %X ", 100);
	ft_printf(" %X ", 101);
	ft_printf(" %X ", -9);
	ft_printf(" %X ", -10);
	ft_printf(" %X ", -11);
	ft_printf(" %X ", -14);
	ft_printf(" %X ", -15);
	ft_printf(" %X ", -16);
	ft_printf(" %X ", -99);
	ft_printf(" %X ", -100);
	ft_printf(" %X ", -101);
	ft_printf(" %X ", INT_MAX);
	ft_printf(" %X ", INT_MIN);
	ft_printf(" %X ", LONG_MAX);
	ft_printf(" %X ", LONG_MIN);
	ft_printf(" %X ", UINT_MAX);
	ft_printf(" %X ", ULONG_MAX);
	ft_printf(" %X ", 9223372036854775807LL);
	ft_printf(" %X %X %X %X %X %X %X", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %X ", 42);
	ft_printf(" %X ", -42);
	printf("\n");
}