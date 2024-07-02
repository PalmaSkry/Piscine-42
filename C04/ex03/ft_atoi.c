/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtaramar <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:53:52 by mtaramar          #+#    #+#             */
/*   Updated: 2024/07/01 16:37:02 by mtaramar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Ignorer les espaces
//verifier le signe + ou - 
//convertir les chiffres en entier
char	ft_count(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{	
			count++;
		}
		i++;
	}
	return (*str);
}	

int	ft_espace(char c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\f'
		|| c == '\t'
		|| c == '\v'
		|| c == '\r');
}

int	ft_chiffre(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	count;
	int	res;
	int	i;

	count = 0;
	res = 0;
	i = 0;
	while (ft_espace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			count++;
		}
		i++;
	}
	while (ft_chiffre(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (count % 2)
		return (-res);
	return (res);
}
