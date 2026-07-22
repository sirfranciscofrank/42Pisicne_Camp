/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_is_prime.c                                     :+:      :+:    :+:    */
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

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_is_prime(0));
// 	printf("%d\n", ft_is_prime(1));
// 	printf("%d\n", ft_is_prime(2));
// 	printf("%d\n", ft_is_prime(9));
// 	printf("%d\n", ft_is_prime(13));
// 	printf("%d\n", ft_is_prime(-7));
// 	return (0);
// }
