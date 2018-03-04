/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 18:41:03 by shomami           #+#    #+#             */
/*   Updated: 2018/03/03 00:10:23 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t len;

	len = 0;
	while (len < n && *s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		len++;
	}
	if (*s1 != *s2)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
