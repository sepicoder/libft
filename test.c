/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 18:21:13 by shomami           #+#    #+#             */
/*   Updated: 2018/02/23 18:43:56 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char *src = "stars";
	char dst1[50];
	char dst2[50];
	size_t max = 50;

	memset(dst1, 'B', sizeof(dst1));
	memset(dst2, 'B', sizeof(dst2));
	strncpy(dst1, src, max);
	ft_strncpy(dst2, src, max);
	printf("%s\n",dst1);
	printf("%s\n",dst2);
}
