/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-g <jpedro-g@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 03:57:54 by jpedro-g          #+#    #+#             */
/*   Updated: 2021/04/12 18:08:41 by jpedro-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *wordfind)
{
	char *result;

	while (*str != '\0' && *wordfind != '\0')
	{
		if (*str == *wordfind)
		{
			result = str;
			while (*str == *wordfind && *wordfind != '\0')
			{
				str++;
				wordfind++;
			}
			if (*wordfind == '\0')
				return (result);
		}
		str++;
	}
	if (*wordfind == '\0')
		return (str);
	return (0);
}
