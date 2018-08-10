/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:11:30 by mmbatha           #+#    #+#             */
/*   Updated: 2018/08/10 14:23:29 by mmbatha          ###   ########.fr       */
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
	ptr1 = malloc(10);
	ptr2 = (int *)calloc(10, sizeof(int));
	ptr3 = (float *)calloc(15, sizeof(float));
	free(ptr2);
	return (0);
}
