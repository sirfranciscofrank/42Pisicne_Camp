/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 17:41:07 by username          #+#    #+#             */
/*   Updated: 2026/07/14 20:30:12 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

char	*ft_same_str(char *s1, char *s2)
{
	if (ft_strcmp(s1, s2) == 0)
		return ("true");
	return ("false");
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_same_str("hello", "hello"));
// 	// true
// 	printf("%s\n", ft_same_str("hello", "help"));
// 	// false
// 	printf("%s\n", ft_same_str("abc", "ab"));
// 	// false
// 	return (0);
// }
