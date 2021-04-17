/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:48:06 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/16 20:11:49 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	char *copydest;

	copydest = dest;
	while (*copydest != '\0')
	{
		copydest++;
	}
	while (*src != '\0')
	{
		*copydest = *src;
		copydest++;
		src++;
	}
	*copydest = '\0';
	return (dest);
}

int		*ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *res;
	int i;
	int range;

	range = 0;
	i = 0;
	if (size == 0)
	{
		res = malloc(1);
		res = '\0';
		return(res);
	}
	while(i < size)
	{
		range = range + ft_strlen(strs[i]);
		i++;
	}
	res = malloc(range + ft_strlen(sep[i]) * (size - 1) + 1);
	i = 0;
	while(i < size)
	{
		res = ft_strcat(res,strs[i]);
		if(i < size - 1)
		{
			res = ft_strcat(res, sep);
		}
		i++;
	}
	return (res);
}
