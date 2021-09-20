/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 01:51:46 by misung            #+#    #+#             */
/*   Updated: 2021/09/15 15:44:55 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	*ft_print_memory(void *addr, unsigned int size)
{
	char	c_addr_idx;

	c_addr_idx = (char*) addr;
	while ((void*) c_addr_idx < (addr + size))
	{
		
	}
	return (addr);
}
