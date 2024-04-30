#include "../includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	tests_u(void)
{
	printf("Tests u: \n");
    ft_printf(" %u ", 0);
	ft_printf(" %u ", -1);
	ft_printf(" %u ", 1);
	ft_printf(" %u ", 9);
	ft_printf(" %u ", 10);
	ft_printf(" %u ", 11);
	ft_printf(" %u ", 15);
	ft_printf(" %u ", 16);
	ft_printf(" %u ", 17);
	ft_printf(" %u ", 99);
	ft_printf(" %u ", 100);
	ft_printf(" %u ", 101);
	ft_printf(" %u ", -9);
	ft_printf(" %u ", -10);
	ft_printf(" %u ", -11);
	ft_printf(" %u ", -14);
	ft_printf(" %u ", -15);
	ft_printf(" %u ", -16);
	ft_printf(" %u ", -99);
	ft_printf(" %u ", -100);
	ft_printf(" %u ", -101);
	ft_printf(" %u ", INT_MAX);
	ft_printf(" %u ", INT_MIN);
	ft_printf(" %u ", LONG_MAX);
	ft_printf(" %u ", LONG_MIN);
	ft_printf(" %u ", UINT_MAX);
	ft_printf(" %u ", ULONG_MAX);
	ft_printf(" %u ", 9223372036854775807LL);
	ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n");
}