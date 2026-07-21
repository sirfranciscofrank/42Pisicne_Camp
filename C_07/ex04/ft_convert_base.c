/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 02:54:44 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/21 02:54:49 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_space(char c);
int		ft_base_len(char *base);
int		ft_get_value(char c, char *base);
int		ft_is_valid_base(char *base);
int		ft_num_len(long value, int base_len);

int	ft_atoi_base(char *nbr, char *base)
{
	int		i;
	int		sign;
	long	result;
	int		blen;

	i = 0;
	sign = 1;
	result = 0;
	blen = ft_base_len(base);
	while (ft_is_space(nbr[i]))
		i++;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nbr[i] && ft_get_value(nbr[i], base) != -1)
	{
		result = result * blen + ft_get_value(nbr[i], base);
		i++;
	}
	return ((int)(result * sign));
}

void	ft_fill_base(char *str, long value, char *base, int len)
{
	int	blen;
	int	neg;
	int	i;

	blen = ft_base_len(base);
	neg = 0;
	if (value < 0)
	{
		neg = 1;
		value = -value;
		str[0] = '-';
	}
	i = len;
	str[i] = '\0';
	while (i > neg)
	{
		i--;
		str[i] = base[value % blen];
		value /= blen;
	}
}

char	*ft_itoa_base(long value, char *base)
{
	char	*str;
	int		len;
	long	nb;

	nb = value;
	if (nb < 0)
		nb = -nb;
	len = ft_num_len(nb, ft_base_len(base));
	if (value < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	ft_fill_base(str, value, base, len);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	value;

	if (!ft_is_valid_base(base_from) || !ft_is_valid_base(base_to))
		return (NULL);
	value = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(value, base_to));
}
