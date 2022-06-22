/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 01:20:20 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/16 23:49:25 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_non_printable(char c)
{
	int	i;

	i = c / 16;
	ft_putchar(i + '0');
	i = c % 16;
	if (i < 10)
		ft_putchar(i + '0');
	else
		ft_putchar(i + 87);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			ft_putchar('\\');
			ft_non_printable(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
