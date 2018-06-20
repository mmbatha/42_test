#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char src[40];
	char dest[100];

	if (argc == 2)
	{
		ft_putendl("\n|******ft_strcpy******|");
		ft_memset(dest, '\0', sizeof(dest));
		ft_strcpy(src, argv[1]);
		ft_strcpy(dest, src);

		printf("Final copied string: %s\n", dest);
	}
	else if (argc == 3)
	{
		ft_putendl("\n|******ft_strncpy******|");
		ft_memset(dest, '\0', sizeof(dest));
		ft_strcpy(src, argv[1]);
		ft_strncpy(dest, src, ft_atoi(argv[2]));

		printf("Final copied string: %s\n", dest);
	}
	return (0);
}
