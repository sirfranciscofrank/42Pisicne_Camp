/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 12:03:40 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/13 13:39:25 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_lowercase(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "abcd";
// 	char	s2[] = "Hello 42!";

// 	printf("%s %s\n", ft_strupcase(s1), ft_strupcase(s2));
// 	return (0);
// }