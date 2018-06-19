#include <stdio.h>
#include "libft1/libft.h"

int				main(int argc, char **argv)
{
	char str[] = "some text with which to test";
	char ch = '.';
	char *ret;

	if (argc == 3)
	{
		ft_strcpy(str, argv[1]);
		ft_strcpy(&ch, argv[2]);

		ret = ft_strchr(str, ch);

		printf("String after |%c| is |%s|\n", ch, ret);
	}
	return (0);
}
