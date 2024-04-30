#include "../includes/ft_printf.h"
#include <stdio.h>
#include <limits.h>

void	tests_x(void)
{
	printf("Tests x: \n");
	ft_printf(" %x ", 0);
	ft_printf(" %x ", -1);
	ft_printf(" %x ", 1);
	ft_printf(" %x ", 9);
	ft_printf(" %x ", 10);
	ft_printf(" %x ", 11);
	ft_printf(" %x ", 1);
	ft_printf(" %x ", 16);
	ft_printf(" %x ", 17);
	ft_printf(" %x ", 99);
	ft_printf(" %x ", 100);
	ft_printf(" %x ", 101);
	ft_printf(" %x ", -9);
	ft_printf(" %x ", -10);
	ft_printf(" %x ", -11);
	ft_printf(" %x ", -14);
	ft_printf(" %x ", -15);
	ft_printf(" %x ", -16);
	ft_printf(" %x ", -99);
	ft_printf(" %x ", -100);
	ft_printf(" %x ", -101);
	ft_printf(" %x ", INT_MAX);
	ft_printf(" %x ", INT_MIN);
	ft_printf(" %x ", LONG_MAX);
	ft_printf(" %x ", LONG_MIN);
	ft_printf(" %x ", UINT_MAX);
	ft_printf(" %x ", ULONG_MAX);
	ft_printf(" %x ", 9223372036854775807LL);
	ft_printf(" %x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf(" %x ", 42);
	ft_printf(" %x ", -42);
	printf("\n");
}