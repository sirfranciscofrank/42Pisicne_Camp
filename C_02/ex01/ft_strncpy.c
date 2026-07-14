/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaengsa <ssaengsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:35:01 by username          #+#    #+#             */
/*   Updated: 2026/07/14 15:07:13 by ssaengsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	buf[5];  //Store data here (or where *dest pointed to..)

// 	ft_strncpy(buf, "Hello,Guys!", 5);   
//     // // Take from "Hello,Guys!" or "Hello"
//     // then paste it inside the array of buf[]""
// 	printf("%s\n", buf);  
//     //%s is format speicifiler for string used alongside printf 
// 	return (0);
// }