/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putstr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/07/16 13:47:47 by username         #+#    #+#              */
/*   Updated: 2026/07/18 13:33:05 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

// int main(void)
// {
// 	ft_putstr("Hello, 42 Bangkok!\n");
// 	ft_putstr("");
// 	ft_putstr("One more line just to be sure.\n");
// 	return (0);
// }
