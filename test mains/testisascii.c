#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	unsigned char a;

	if (argc == 2)
	{
		a = ft_atoi(argv[1]);
		if (ft_isascii(a))
			printf("Is '%c' on the Ascii Table? True!\n", a);
		else
			printf("Is '%c' on the Ascii Table? False!\n", a);
	}
	return (0);
}
