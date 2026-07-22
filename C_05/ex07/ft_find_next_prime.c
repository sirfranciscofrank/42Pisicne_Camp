/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_find_next_prime.c                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/19 12:00:00 by username         #+#    #+#              */
/*   Updated: 2026/07/19 12:00:00 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_find_next_prime(4));
// 	printf("%d\n", ft_find_next_prime(13));
// 	printf("%d\n", ft_find_next_prime(-100));
// 	printf("%d\n", ft_find_next_prime(2147483630));
// 	return (0);
// }
