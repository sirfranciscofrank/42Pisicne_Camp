/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_recursive_power.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/19 12:00:00 by username         #+#    #+#              */
/*   Updated: 2026/07/19 12:00:00 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(2, 10));
// 	printf("%d\n", ft_recursive_power(0, 0));
// 	printf("%d\n", ft_recursive_power(5, -2));
// 	return (0);
// }
