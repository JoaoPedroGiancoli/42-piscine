/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:54:03 by fbafica           #+#    #+#             */
/*   Updated: 2021/04/11 23:29:38 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	fill(char *clues);

int main (int argc, char **argv)
{
	char *clues;
	
	clues = argv[1];
	fill(clues);
	return (0);
}
