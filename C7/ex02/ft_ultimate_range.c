/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:35:35 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/16 19:46:00 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*int_values;
	int j;
	int	i;

	int_values = 0;
	j = max - min;
	if (min >= max)
	{
		int_values = NULL;
		return (0);
	}
	int_values = (int*)malloc(j * sizeof(int));
	i = 0;
	while ((i + min) < max)
	{
		int_values[i] = min + i;
		i++;
	}
	*range = int_values;
	return (i);
}
