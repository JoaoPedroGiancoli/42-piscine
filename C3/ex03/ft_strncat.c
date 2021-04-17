/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 03:56:44 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/12 22:10:41 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int		i;
	char				*copydest;

	i = 0;
	copydest = dest;
	while (*copydest != '\0')
	{
		copydest++;
	}
	while (*src != '\0' && i < nb)
	{
		*copydest = *src;
		copydest++;
		src++;
		i++;
	}
	*copydest = '\0';
	return (dest);
}
