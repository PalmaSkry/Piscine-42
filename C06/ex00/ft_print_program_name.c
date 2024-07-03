/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:43:13 by mtaramar          #+#    #+#             */
/*   Updated: 2024/07/03 11:49:56 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	count;

	count = 0;
	while (argv[0][count] != '\0')
	{
		write(1, &argv[0][count], 1);
		count++;
	}
	write(1, "\n", 1);
	(void)argc;
	return (0);
}
