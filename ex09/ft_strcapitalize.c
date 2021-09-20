/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:18:47 by misung            #+#    #+#             */
/*   Updated: 2021/09/21 00:15:58 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

bool	ft_is_alphabet(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (true);
	}
	return (false);
}

bool	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (true);
	}
	return (false);
}

bool	ft_is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (true);
	}
	return (false);
}

char	ft_change_letter(char c, bool *is_first_char)
{
	if (*is_first_char && ft_is_alphabet(c))
	{
		if (ft_is_lowercase(c))
			c -= 32;
		*is_first_char = false;
	}
	else
	{
		if (!(ft_is_numeric(c)) && !(ft_is_alphabet(c)))
		{
			*is_first_char = true;
		}
		else if (ft_is_alphabet(c) && !(ft_is_lowercase(c)))
		{
			c += 32;
		}
		else
		{
			*is_first_char = false;
		}
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	is_first_char;

	i = 0;
	is_first_char = true;
	while (str[i] != '\0')
	{
		str[i] = ft_change_letter(str[i], &is_first_char);
		i++;
	}
	return (str);
}
