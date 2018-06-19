#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	int		i;
	char	str[100];

	if (argc == 2)
	{
		i = 0;
		ft_strcpy(str, argv[1]);
		while (str[i])
		{
			ft_putchar(ft_tolower(str[i]));
			i++;
		}
	}
	return (0);
}
