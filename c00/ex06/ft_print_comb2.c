/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 20:59:11 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/16 21:17:33 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int num, int num2)
{
	char	c;

	c = (num / 10) + '0';
	write(1, &c, 1);
	c = (num % 10) + '0';
	write(1, &c, 1);
	write(1, " ", 1);
	c = (num2 / 10) + '0';
	write(1, &c, 1);
	c = (num2 % 10) + '0';
	write(1, &c, 1);
	if (num != 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i, j);
			j++;
		}
		i++;
	}
}
