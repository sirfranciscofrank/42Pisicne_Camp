/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 23:18:27 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/14 23:18:27 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	haystack[] = "the quick brown fox";

	printf("%s\n", ft_strstr(haystack, "brown"));  // [brown fox]
	printf("%s\n", ft_strstr(haystack, "the"));    // [the quick brown fox]
	printf("%s\n", ft_strstr(haystack, "fox"));    // [fox]
	printf("%s\n", ft_strstr(haystack, ""));       // [the quick brown fox]
	printf("%p\n", ft_strstr(haystack, "zebra"));  // [(nil)]
	printf("%s\n", ft_strstr("aaab", "aab"));      // [aab]
	return (0);
}