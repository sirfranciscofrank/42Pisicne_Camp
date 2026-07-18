/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_iterative_factorial.c                          :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/18 20:00:34 by username         #+#    #+#              */
/*   Updated: 2026/07/18 20:59:53 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// 	return (0);
// }
