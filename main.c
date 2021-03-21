#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int main()
{
	unsigned int u;
	u = 0;

	ft_printf("-->|%0*.*u|<--\n", -4, -4, u);
	printf("-->|%0*.*u|<--\n", -4, -4, u);
	// ft_printf("-->|%0*u|<--\n", -4, u);
	// printf("-->|%0*u|<--\n", -4, u);
	// ft_printf("-->|%-u|<--\n", u);
	// printf("-->|%-u|<--\n", u);
	// ft_printf("-->|%0*u|<--\n", -4, u);
	// printf("-->|%0*u|<--\n", -4, u);
	ft_printf("-->|%0.*u|<--\n", -4, u);
	printf("-->|%0.*u|<--\n", -4, u);
	return (0);
}
