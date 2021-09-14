/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:15:52 by misung            #+#    #+#             */
/*   Updated: 2021/09/14 19:26:09 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_not_alphabet(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
	{
		return (0);
	}
	return (1);
}

char	ft_char_judge(char c, int *b_first_char)
{
	if (*b_first_char == 1)
	{
		if (c >= 'a' && c <= 'z')
		{
			c -= 32;
			*b_first_char = 0;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			*b_first_char = 0;
		}
	}
	else if (*b_first_char == 0)
	{
		if (c >= 'A' && c <= 'Z')
		{
			c += 32;
		}
		else if (ft_is_not_alphabet(c) == 1)
		{
			*b_first_char = 1;
		}
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int				b_first_char;
	unsigned int	i;

	b_first_char = 1;
	i = 0;
	while (str[i] != '\0')
	{
		str[i] = ft_char_judge(str[i], &b_first_char);
		i++;
	}
	return (str);
}
