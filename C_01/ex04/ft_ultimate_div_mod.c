/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 13:46:26 by ssaengsa          #+#    #+#             */
/*   Updated: 2026/07/12 13:52:17 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_a;
	int	temp_b;

	temp_a = *a;
	temp_b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}

// #include <stdio.h>
// int main(void)
// {
//     int a = 17;
//     int b = 5;
//     printf("initial a = %d, b = %d\n", a, b);
//     ft_ultimate_div_mod(&a, &b);
//     printf("after -> a (div) = %d (expected 3)\n", a);
//     printf("after -> b (mod) = %d (expected 2)\n", b);
//     return (0);
// }
