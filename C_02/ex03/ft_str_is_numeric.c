/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 09:54:22 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/13 10:33:25 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_nbr(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_nbr(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d %d %d %d\n", is_nbr('5'),
		ft_str_is_numeric("123"),
		ft_str_is_numeric("12a"),
		ft_str_is_numeric(""));
	return (0);
}
*/