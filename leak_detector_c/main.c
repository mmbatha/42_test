/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:24:00 by mmbatha           #+#    #+#             */
/*   Updated: 2018/08/10 14:27:34 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "leak_detector_c.h"

int				main(void)
{
	char	*ptr1;
	int		*ptr2;
	float	*ptr3;

	atexit(report_mem_leak);
	ptr1 = malloc(sizeof(char));
	ptr2 = (int *)calloc(10, sizeof(int));
	ptr3 = (float *)calloc(15, sizeof(float));
	free(ptr2);
	return (0);
}
