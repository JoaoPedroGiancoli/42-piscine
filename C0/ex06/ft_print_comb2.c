/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:32:48 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/06 22:07:15 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_4num(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
	{
		write(1, ".", 1);
	}
	else
	{
		write(1, ", ", 2);
	}
}

void	cut(char a, char b, char c, char d)
{
	if (c == a && d > b)
	{
		ft_4num(a, b, c, d);
	}
	if (c > a)
	{
		ft_4num(a, b, c, d);
	}
}

void	cutmore(a, b, c, d)
{
	while (d <= '9')
	{
	cut(a, b, c, d);
	d++;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				cutmore(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
}
