/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 20:16:06 by misung            #+#    #+#             */
/*   Updated: 2021/09/15 01:27:58 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_printable(unsigned char c)
{
	if (c >= 32 && c != 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	ft_print_non_printable_char(unsigned char c)
{
	ft_putchar('\\');
	ft_putchar("0123456789abcdef"[c / 16]);
	ft_putchar("0123456789abcdef"[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_print_non_printable_char(str[i]);
		}
		i++;
	}
}
