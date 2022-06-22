/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spoomkas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:41:26 by spoomkas          #+#    #+#             */
/*   Updated: 2022/06/16 16:52:43 by spoomkas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	ft_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	ft_iscapital(char c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
		i = 1;
	else if (c >= 'A' && c <= 'Z')
		i = 1;
	else if (c >= '0' && c <= '9')
		i = 1;
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str[0] = ft_uppercase(str[0]);
	while (str[i + 1] != '\0')
	{
		if (ft_iscapital(str[i]) == 0)
			str[i + 1] = ft_uppercase(str[i + 1]);
		else
			str[i + 1] = ft_lowercase(str[i + 1]);
		i++;
	}
	return (str);
}
