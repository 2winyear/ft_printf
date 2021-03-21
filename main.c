#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"


//-기호 출력하는 부분,
int main()
{
	int d;
	d = -135;

	ft_printf("-->|%.*d|<--\n", -4, d);
	printf("-->|%.*d|<--\n", -4, d);

	ft_printf("-->|%.*d|<--\n", -5, d);
	printf("-->|%.*d|<--\n", -5, d);

	ft_printf("-->|%0*.*d|<--\n", 5, -4, d);
	printf("-->|%0*.*d|<--\n", 5, -4, d);
	ft_printf("-->|%07.*d|<--\n", -4, d);
	printf("-->|%07.*d|<--\n", -4, d);
	// ft_printf("-->|%0*d|<--\n", 4, d);
	// printf("-->|%0*d|<--\n", 4, d);
	// ft_printf("-->|%--3.d|<--\n", d);
	// printf("-->|%--3.d|<--\n", d);
	return (0);
}
