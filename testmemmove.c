#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char dest[10] = "ipsum";
	char src[10] = "lorem";

	if (argc == 2)
	{
		printf("Before ft_memmove dest = |%s|, src = |%s|\n", dest, src);
		ft_strcpy(src, argv[1]);
		ft_memmove(dest, src, 9);
		printf("After ft_memmove dest = |%s|, src = |%s|\n", dest, src);
	}
	return (0);
}
