/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:09:36 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/21 18:19:23 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_error(char *str)
{
	int	i;

	i = 0;
	while (str[i + 1] != '\0')
	{
		if (str[i] == str[i + 1])
			return (0);
		i++;
	}
	if (i < 1)
		return (0);
	return (i + 1);
}

void	ft_printnbr(int nbr, char *base, int size)
{
	char	c;

	if (nbr >= size)
	{
		ft_printnbr(nbr / size, base, size);
	}
	c = base[nbr % size];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = ft_error(base);
	if (i == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	ft_printnbr(nbr, base, i);
}
