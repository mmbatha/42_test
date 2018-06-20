#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char src[50];
	char dest[50];

	if (argc == 4)
	{
		ft_strcpy(src, argv[1]);
		ft_strcpy(dest, argv[2]);

		ft_strlcat(dest, src, (size_t)ft_atoi(argv[3]));
		printf("Final string in destination: |%s|\n", dest);
	}
	return (0);
}
