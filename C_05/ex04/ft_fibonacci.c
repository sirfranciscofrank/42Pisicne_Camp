/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_fibonacci.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/19 12:00:00 by username         #+#    #+#              */
/*   Updated: 2026/07/19 12:00:00 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_fibonacci(0));
// 	printf("%d\n", ft_fibonacci(1));
// 	printf("%d\n", ft_fibonacci(10));
// 	printf("%d\n", ft_fibonacci(-3));
// 	return (0);
// }
