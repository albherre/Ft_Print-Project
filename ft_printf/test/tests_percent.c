#include "../includes/ft_printf.h"
#include <stdio.h>

void	tests_percent(void)
{
	printf("Tests %%: \n");
	ft_printf(" %% ");
	ft_printf(" %%%% ");
	ft_printf(" %% %% %% ");
	ft_printf(" %%  %%  %% ");
	ft_printf(" %%   %%   %% ");
	ft_printf("%%");
	ft_printf("%% %%");
	printf("\n");
}