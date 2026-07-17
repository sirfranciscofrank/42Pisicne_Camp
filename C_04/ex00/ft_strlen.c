/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 13:44:20 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/16 13:44:20 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
    {
        len++;
    }
	return (len);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_strlen("42Bangkok"));   // 9
	printf("%d\n", ft_strlen(""));            // 0
	printf("%d\n", ft_strlen("a"));           // 1
	return (0);
}