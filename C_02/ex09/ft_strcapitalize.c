/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 13:50:23 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/13 13:55:55 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alnum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 1;
	while (str[i])
	{
		if (start && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (!start && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		start = !is_alnum(str[i]);
		i++;
	}
	return (str);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "hello world";
// 	char	s2[] = "HELLO WORLD";
// 	char	s3[] = "bon ap petit";

// 	printf("%s\n%s\n%s\n", ft_strcapitalize(s1),
// 		ft_strcapitalize(s2),
// 		ft_strcapitalize(s3));
// 	return (0);
// }