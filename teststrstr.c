/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:06:45 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/16 14:48:35 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft1/libft.h"

int			main(int argc, char **argv)
{
	if (argc == 3)
	{
		char *ret;
		
		ret = strstr(argv[1], argv[2]);
		printf("The substring from strstr is: %s\n", ret);
		ret = ft_strstr(argv[1], argv[2]);
		printf("The substring from ft_strstr is: %s\n", ret);
		
		return (0);
	}
}
