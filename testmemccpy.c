#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char *msg = NULL;
	char buffer[80];
	char c = '\0';

	if (argc == 3)
	{
		ft_strcpy(msg, argv[1]);
		ft_strcpy(&c, argv[2]);
		ft_memset(buffer, '\0', 80);
		ft_memccpy(buffer, msg, c, 80);
		printf("%s\n", buffer);
	}
	return (0);
}
