/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:06:27 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/17 18:30:37 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnum(int nb)
{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		ft_printnum(nb);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_printnum(nb % 10);
	}
}
