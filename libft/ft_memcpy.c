/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 02:23:29 by adunal            #+#    #+#             */
/*   Updated: 2022/10/07 08:09:13 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*str1;

	i = 0;
	str = (char *)dst;
	str1 = (char *)src;
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	dst = (void *)str;
	return (dst);
}
