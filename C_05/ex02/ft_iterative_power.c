/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_iterative_power.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/19 12:00:00 by username         #+#    #+#              */
/*   Updated: 2026/07/19 20:57:14 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_power(2, 10));
// 	printf("%d\n", ft_iterative_power(0, 0));
// 	printf("%d\n", ft_iterative_power(5, -2));
// 	return (0);
// }
