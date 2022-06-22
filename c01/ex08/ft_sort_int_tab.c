/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 21:38:02 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/11 21:50:54 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	index;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		min = *(tab + i);
		index = i;
		while (j < size)
		{
			if (min > *(tab + j))
			{
				index = j;
				min = *(tab + j);
			}
			j++;
		}
		j = *(tab + i);
		*(tab + i) = min;
		*(tab + index) = j;
		i++;
	}
}
