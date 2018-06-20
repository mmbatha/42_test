#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	const char src[50] = "http://www.technoris.co.za";
	char dest[50];

	if (argc == 2)
	{
		ft_strcpy(dest, argv[1]);
		printf("Before ft_memcpy, dest = %s\n", dest);
		ft_memcpy(dest, src, ft_strlen(src) + 1);
		printf("After ft_memcpy, dest = %s\n", dest);
	}
	else if (argc == 3)
	{
		ft_strcpy(dest, argv[1]);
		printf("Before ft_memccpy, dest = %s\n", dest);
		ft_memccpy(dest, src, ft_atoi(argv[2]), ft_strlen(src) + 1);
		printf("After ft_memccpy, dest = %s\n", dest);
	}
	return (0);
}
