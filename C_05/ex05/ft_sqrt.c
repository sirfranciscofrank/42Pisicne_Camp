/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_sqrt.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/19 12:00:00 by username         #+#    #+#              */
/*   Updated: 2026/07/19 12:00:00 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(16));
// 	printf("%d\n", ft_sqrt(17));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(-4));
// 	printf("%d\n", ft_sqrt(2147395600));
// 	return (0);
// }
