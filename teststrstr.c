/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:06:45 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/19 12:42:26 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft1/libft.h"

int			main(int argc, char **argv)
{
	char *ret;
	if (argc == 3)
	{
		ret = strstr(argv[1], argv[2]);
		printf("The substring from strstr is: %s\n", ret);
		ret = ft_strstr(argv[1], argv[2]);
		printf("The substring from ft_strstr is: %s\n", ret);
	}
	else if (argc == 4)
	{
		ret = strnstr(argv[1], argv[2], ft_atoi(argv[3]));
		printf("The substring from strnstr is: %s\n", ret);
		ret = ft_strnstr(argv[1], argv[2], ft_atoi(argv[3]));
		printf("The substring from ft_strnstr is: %s\n", ret);
	}
	return (0);
}
