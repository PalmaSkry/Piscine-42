/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:06:11 by mtaramar          #+#    #+#             */
/*   Updated: 2024/07/01 11:38:32 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nbr)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nbr)
	{
		dest[i] = src[j];
			i++;
			j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char dest[15] = "jesuis";
	char source[15] = "bgtapeur";

	char *t = ft_strncat(a, b, 8);
	printf ("%s\n", t);
	return (0);
}
*/
