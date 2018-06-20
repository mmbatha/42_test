#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_isalnum((int)argv[1][0]))
			printf("Is %s a digit or member of the alphabet? True!\n", (char *)argv[1]);
		else
			printf("Is %s a digit or member of the alphabet? False!\n", (char *)argv[1]);
	}
	return (0);
}
