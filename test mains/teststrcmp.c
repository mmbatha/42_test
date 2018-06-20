#include "libft1/libft.h"

int			main(int argc, char **argv)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	if (argc == 3)
	{
		ft_strcpy(str1, argv[1]);
		ft_strcpy(str2, argv[2]);

		ret = ft_strcmp(str1, str2);

		ft_putendl("\n|******ft_strcmp******|");

		if (ret < 0)
			ft_putendl("str1 is less than str2");
		else if (ret > 0)
			ft_putendl("str2 is less than str1");
		else
			ft_putendl("str1 is equal to str2");
	}
	else if (argc == 4)
	{
		ft_strcpy(str1, argv[1]);
		ft_strcpy(str2, argv[2]);

		ret = ft_strncmp(str1, str2, ft_atoi(argv[3]));

		ft_putendl("\n|******ft_strncmp******|");

		if (ret < 0)
			ft_putendl("str1 is less than str2");
		else if (ret > 0)
			ft_putendl("str2 is less than str1");
		else
			ft_putendl("str1 is equal to str2");
	}
	return (0);
}
