/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:51:47 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/14 03:53:39 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fatorial;

	fatorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		fatorial *= nb--;
	}
	return (fatorial);
}
