/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:46:30 by mtaramar          #+#    #+#             */
/*   Updated: 2024/06/27 15:27:12 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	count;

	count = 97;
	while (count >= 97 && count <= 122)
	{
		write(1, &count, 1);
	count++;
	}
}
// Autre maniere de faire :
// void ft_print_alphabet(void)
//{
//	write(1, "abcdefghijklmnopqrstuvwxyz\n", 26)
//}
//
//int main(void)
//{
//	ft_print_alphabet();
//	return (0);
//}
