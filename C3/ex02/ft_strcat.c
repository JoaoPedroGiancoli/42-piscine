/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 23:23:17 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/12 15:06:13 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
