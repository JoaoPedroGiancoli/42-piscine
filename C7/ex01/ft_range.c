/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:22:48 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/17 02:00:06 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *int_values;
	int j;
	int i;

	int_values = 0;
	j = max - min;
	if (min >= max)
		return (int_values);
	int_values = malloc((j * sizeof(int)));
	i = 0;
	while ((i + min) < (max))
	{
		int_values[i] = min + i;
		i++;
	}
	return (int_values);
}
