/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 10:20:01 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/13 10:32:05 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower_case(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_lower_case(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d %d %d %d\n", is_lower_case('a'),
		ft_str_is_lowercase("abc"),
		ft_str_is_lowercase("abC"),
		ft_str_is_lowercase(""));
	return (0);
}
*/
