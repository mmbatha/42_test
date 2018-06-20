#include <stdio.h>
#include "libft1/libft.h"

int				main(void)
{
	char			str[50];

	ft_strcpy(str, "This is a libft.h library function");
	ft_putendl(str);

	ft_bzero(str, 7);
	ft_putendl(str);

	ft_strcpy(str, "This is a libft.h library function");
	ft_putendl(str);

	ft_memset(str, '$', 7);
	ft_putendl(str);
	return (0);
}
