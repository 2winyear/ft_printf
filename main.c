#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"


//-기호 출력하는 부분,
int main()
{

	int		a = -4;
	int		b = 0;
	int		e = 0;
	printf(" --- Return : %d\n", ft_printf("%*.*x, %*.*X", a, b, e, a, b, e));
	printf(" --- Return : %d\n", ft_printf("%0*.*x, %0*.*X", a, b, e, a, b, e));
	printf(" --- Return : %d\n", ft_printf("%-*.*x, %-*.*X", a, b, e, a, b, e));

	printf(" --- Return : %d\n", printf("%*.*x, %*.*X", a, b, e, a, b, e));
	printf(" --- Return : %d\n", printf("%0*.*x, %0*.*X", a, b, e, a, b, e));
	printf(" --- Return : %d\n", printf("%-*.*x, %-*.*X", a, b, e, a, b, e));
	return (0);
}
