/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 20:53:53 by fbafica           #+#    #+#             */
/*   Updated: 2021/04/11 23:34:26 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void fill_in(int matrix[6][6], char *clues)
{
	int counter_c = 1;
	int counter_l = 1;
		while(counter_c < 6)
		{
			if(matrix[0][counter_c] == 4
			&& matrix[5][counter_c] == 1)
			{
				matrix[1][counter_c] = 1;
				matrix[2][counter_c] = 2;
				matrix[3][counter_c] = 3;
				matrix[4][counter_c] = 4;
			}
			if(matrix[0][counter_c] == 3
			&& matrix[5][counter_c] == 1)
			{
				matrix[1][counter_c] = 1;
				matrix[2][counter_c] = 3;
				matrix[3][counter_c] = 2;
				matrix[4][counter_c] = 4;
			}
			if(matrix[0][counter_c] == 3
			&& matrix[5][counter_c] == 2)
			{
				matrix[1][counter_c] = 2;
				matrix[2][counter_c] = 3;
				matrix[3][counter_c] = 4;
				matrix[4][counter_c] = 1;
			}
			if(matrix[0][counter_c] == 2
			&& matrix[5][counter_c] == 2)
			{
				matrix[1][counter_c] = 3;
				matrix[2][counter_c] = 4;
				matrix[3][counter_c] = 1;
				matrix[4][counter_c] = 2;
			}
			if(matrix[0][counter_c] == 1
			&& matrix[5][counter_c] == 2)
			{
				matrix[1][counter_c] = 4;
				matrix[2][counter_c] = 1;
				matrix[3][counter_c] = 2;
				matrix[4][counter_c] = 3;
			}
		counter_c++;
		}
	while(counter_l < 6)
		{
		if((matrix[counter_l][0] == 4
			&& matrix[counter_l][5] == 1))
		{
			matrix[1][1] = 1;
			matrix[1][2] = 2;
			matrix[1][3] = 3;
			matrix[1][4] = 4;
		}
		counter_l++;
		}
}

void fill_c(int matrix[6][6], char *clues)
{
	int counter_l = 0;
	int counter_c = 0;
	int counter_c_clues = 16;
	while (counter_c < 6)
	{
		if (counter_c == 0)
		{
			while (counter_c_clues <= 22)
			{
				matrix[(counter_l + 1)][counter_c] = (clues[counter_c_clues] - 48);
				counter_c_clues = counter_c_clues + 2;
				counter_l++;
			}
		}
		counter_l = 0;
		if (counter_c == 5)
		{
			while (counter_c_clues <= 30)
			{
				matrix[(counter_l + 1)][counter_c] = (clues[counter_c_clues] - 48);
				counter_c_clues = counter_c_clues + 2;
				counter_l++;
			}
		}
		counter_c++;
	}
}

void fill_l(int matrix[6][6], char *clues)
{
	int counter_l = 0;
	int counter_c = 0;
	int counter_c_clues = 0;
	while (counter_l < 6)
	{
		if (counter_l == 0)
		{
			while (counter_c_clues <= 6)
			{
				matrix[counter_l][(counter_c + 1)] = (clues[counter_c_clues] - 48);
				counter_c_clues = counter_c_clues + 2;
				counter_c++;
			}
		}
		counter_c = 0;
		if (counter_l == 5)
		{
			while (counter_c_clues <= 14)
			{
				matrix[counter_l][(counter_c + 1)] = (clues[counter_c_clues] - 48);
				counter_c_clues = counter_c_clues + 2;
				counter_c++;
			}
		}
		counter_l++;
	}
}

void fill(char *clues)
{
	int print_l;
	int print_c;
	int resultado;
	int matrix[6][6] = {
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
};
	fill_l(matrix, clues);
	fill_c(matrix, clues);
	fill_in(matrix, clues);
	
	print_c = 1;
	print_l = 1;
	while(print_l <= 4)
	{
		print_c = 1;
		while(print_c <= 4)
		{	
			resultado = matrix[print_l][print_c] + 48;
			write(1, &resultado , 1);
			write(1, " ", 1);
			print_c++;
		}
		write(1, "\n", 1);
		print_l++;
	}
}
