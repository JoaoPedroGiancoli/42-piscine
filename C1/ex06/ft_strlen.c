/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 13:55:42 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/08 15:51:09 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int mrk;
	int numcounter;

	numcounter = 0;
	mrk = *str;
	while (mrk != 0)
	{
		str++;
		mrk = *str;
		numcounter++;
	}
	return (numcounter);
}
