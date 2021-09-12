/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misung <misung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:28:46 by misung            #+#    #+#             */
/*   Updated: 2021/09/12 19:32:10 by misung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
	char str1[] = "12345";
	char str2[] = "onetwothree";
	char str3[] = "1o2t3t";
	char str4[] = "     ";

	printf("%s, %d\n", str1, ft_str_is_numeric(str1));
	printf("%s, %d\n", str2, ft_str_is_numeric(str2));
	printf("%s, %d\n", str3, ft_str_is_numeric(str3));
	printf("%s, %d\n", str4, ft_str_is_numeric(str4));
	return (0);
}
