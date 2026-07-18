/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/16 13:44:20 by username         #+#    #+#              */
/*   Updated: 2026/07/18 13:33:01 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strlen("42Bangkok"));
// 	// 9
// 	printf("%d\n", ft_strlen(""));
// 	// 0
// 	printf("%d\n", ft_strlen("a"));
// 	// 1
// 	return (0);
// }
