/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 02:54:44 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/21 02:54:49 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		total += ft_strlen(sep) * (size - 1);
	return (total);
}

int	ft_copy(char *dest, char *src, int j)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;

	result = (char *)malloc(sizeof(char) * (ft_total_len(size, strs, sep) + 1));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (i < size)
	{
		j = ft_copy(result, strs[i], j);
		if (i < size - 1)
			j = ft_copy(result, sep, j);
		i++;
	}
	result[j] = '\0';
	return (result);
}
