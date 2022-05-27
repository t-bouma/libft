/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouma <tbouma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:25:29 by tbouma            #+#    #+#             */
/*   Updated: 2022/05/27 13:06:16 by tbouma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoi_h(long num_l, int minplus)
{
	num_l *= minplus;
	if (num_l < INT_MIN)
		return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	num_l;
	int		minplus;

	i = 0;
	num_l = 0;
	minplus = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minplus = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num_l *= 10;
		num_l += str[i] - 48;
		i++;
		if (num_l >= INT_MAX)
			return (0);
	}
	return (atoi_h(num_l, minplus));
}

// int main(void)
// {
// 	char string1[20] = "123479345";
// 	char string2[20] = "tiemen1";
// 	int num1;
// 	int num2;

// 	num1 = ft_atoi(string1);
// 	num2 = ft_atoi(string2);
// 	printf("num1= %d\n", num1);
// 	printf("num2= %d\n", num2);

// }
