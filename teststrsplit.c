/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:06:45 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/17 10:48:09 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft1/libft.h"

int			main(int argc, char **argv)
{
	char	**list;
	char	str[26];
	int		i;
	int		len;

	if (argc == 3)
	{
		ft_strcpy(str, argv[1]);
		
		ft_putendl("\n|******ft_strsplit******|");

		list = ft_strsplit(str, argv[2][0]);
		len = sizeof(list)/sizeof(list[0]);
		i = 0;
		while (i < 4)
		{
			ft_putendl(list[i]);
			i++;
		}
	}
	return (0);
}
