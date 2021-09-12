/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:37:44 by misung            #+#    #+#             */
/*   Updated: 2021/09/11 22:46:56 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*c_dest;
	char	*c_src;

	c_dest = dest;
	c_src = src;
	while (*c_src != '\0')
	{
		*c_dest = *c_src;
		c_src++;
		c_dest++;
	}
	return (dest);
}
