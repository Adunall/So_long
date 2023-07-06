/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adunal <adunal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:48:08 by adunal            #+#    #+#             */
/*   Updated: 2022/10/28 09:05:04 by adunal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//İstenilen string kadar mallocta yer ayırıyor, stringi içine koyup return yapar

char	*ft_strdup(const char *str)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!ret)
		return (NULL);
	while (str[i] != '\0')
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/*
int	main(void)
{
	char	str[] = "ademunal";
	printf("%s", ft_strdup(str));
}
*/
//ft_strlen(str) + 1 kısmındaki 1 sona koyulacak NULL için..		
