/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:49:52 by adunal            #+#    #+#             */
/*   Updated: 2022/10/14 01:21:42 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//String içinde char değerini arıyor
//Bulduğu son char dan sonrasını yazdırıyor

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s[s_len] >= 0)
	{
		if (s[s_len] == (char)c)
			return ((char *)(s + s_len));
		s_len--;
	}
	return (0);
}
/*
int	main(void)
{
	char	s[] = "tripot";
	int	c = 'z';
	printf("%s\n", ft_strrchr(s, c));
}
*/