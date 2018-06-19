#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char letter;

	letter = *argv[1];
	if (argc == 2)
	{
		if (ft_isalpha(letter))
			printf("Is %c a member of the alphabet? True!\n", letter);
		else
			printf("Is %c a member of the alphabet? False!\n", letter);
	}
	return (0);
}
