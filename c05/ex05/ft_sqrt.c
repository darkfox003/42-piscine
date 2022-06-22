/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 21:00:48 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/21 21:07:26 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

int	ft_find_sqrt(int nb)
{
	double	x;
	double	root;

	x = nb;
	while (1)
	{
		root = 0.5 * (x + (nb / x));
		if (ft_abs(root - x) < 1)
			break ;
		x = root;
	}
	return (root);
}

int	ft_sqrt(int nb)
{
	int	root;

	if (nb <= 0)
		return (0);
	root = ft_find_sqrt(nb);
	if (root * root == nb)
		return (root);
	return (0);
}
