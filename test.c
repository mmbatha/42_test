/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 11:06:45 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/15 16:20:25 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft1/libft.h"

int			main(int argc, char **argv)
{
	char str[20];
	int val;

	ft_putendl("|******ft_atoi.c******|");
	ft_strcpy(str, argv[1]);
	val = atoi(argv[1]);
	printf("String value (atoi) = %s, Int value = %i\n", str, val);
	val = ft_atoi(argv[1]);
	printf("String value (ft_atoi) = %s, Int value = %i\n", str, val);

	return (0);
}
