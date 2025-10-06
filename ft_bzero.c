/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 19:06:20 by alegesle          #+#    #+#             */
/*   Updated: 2025/10/06 20:36:22 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{	
	unsigned	char* string;
	size_t			i;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
	
}

//hot to declare strings in c (string literal, mutable strings)
int	main(void)
{
	char	test[] = "hello";
	size_t i;
	i = 0;

	printf("before bzero: %s\n", test);
	ft_bzero(test, 3);
	while (i < 6)
	{
		printf("after bzero: %c\n", test[i]);
		i++;
	}
}