/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 13:52:12 by alegesle          #+#    #+#             */
/*   Updated: 2025/10/02 16:03:57 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fills the first n bytes pointed to by s with c
//returns pointer to memory area pointer to
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*start;
	int				i;

	i = 0;
	start = (unsigned char *)s;
	while (i < n)
	{
		start[i] = c;
		i++;
	}
	return (s);
}

int	main(void)
{
	char *string;
	int	c;
	size_t	n;

	n = 2;
	c = 1;
	string = "hello";
	printf("test_my:%s\n", ft_memset(string, c, n));
}