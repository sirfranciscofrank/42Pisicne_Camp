/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 09:26:05 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/13 10:46:28 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_alpha(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d %d %d %d\n", is_alpha('a'),
		ft_str_is_alpha("abc"),
		ft_str_is_alpha("ab1"),
		ft_str_is_alpha(""));
	return (0);
}
*/
