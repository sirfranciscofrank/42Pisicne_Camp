/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:28:58 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/12 13:42:59 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>
// int main(void)
// {
// 	int x = 5;
// 	int y = 10;

// 	printf("Before: x=%d y=%d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("After:  x=%d y=%d\n", x, y);
// 	return 0;
// }
