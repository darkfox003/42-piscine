/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 02:00:26 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/17 14:37:54 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	id;
	unsigned int	is;
	unsigned int	j;

	id = 0;
	is = 0;
	while (src[is] != '\0')
		is++;
	while (dest[id] != '\0')
		id++;
	if (size < 1)
		return (is);
	if (size < id)
		return (size + is);
	j = 0;
	while (src[j] != '\0' && j + id < size - 1)
	{
		dest[id + j] = src[j];
		j++;
	}
	dest[id + j] = '\0';
	return (is + id);
}
