/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shomami <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 23:13:55 by shomami           #+#    #+#             */
/*   Updated: 2018/02/23 16:27:29 by shomami          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;

	s2 = (char*)malloc(sizeof(char) * (ft_strlen((char *)s1) + 1));
	s2 = ft_strcpy(s2, (char *)s1);
	return (s2);
}