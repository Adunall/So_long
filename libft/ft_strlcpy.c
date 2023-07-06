/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:30:02 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 14:53:00 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (i < dstsize && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		return (ft_strlen(src));
	}
	return (0);
}
/*
int	main(void)
{
	char	*s;
	char	*c;

	s[3] = "adem";
	c[3] = "unal";
	printf("%zu", ft_strlcpy(s, c, 4));
	printf("%d", s);
}
*/