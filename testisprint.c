#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	unsigned char a;

	if (argc == 2)
	{
		a = ft_atoi(argv[1]);
		if (ft_isprint(a))
			printf("Is '%c' printable? True!\n", a);
		else
			printf("Is '%c' printable? False!\n", a);
	}
	return (0);
}
