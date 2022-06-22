/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:11:11 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/19 14:13:47 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

int	ft_checking(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (*(str + i) != to_find[i])
			break ;
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = ft_strlen(to_find);
	while (*str != '\0')
	{
		if (*str == to_find[0])
			j = ft_checking(str, to_find);
		if (i == j)
			return (str);
		str++;
	}
	return (0);
}
