/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:26:35 by alegesle          #+#    #+#             */
/*   Updated: 2025/10/02 14:47:16 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calculates the length of the string pointed to by s, excluding '\0'
//returns number of bytes in the string
size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
//itereating through the pointer itself
/*size_t ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*(s++) != '\0')
		len++;
	return (len);
}*/
int	main(void)
{
	char	*string;
	int		len;

	string = "";
	len = ft_strlen(string);
	printf("\ntesting my function: %i\n", len);
	printf("\ntesting original: %i\n\n", len);

	/*printf("testing my function: %zu\n", ft_strlen("hello"));
	printf("testing woth original: %zu\n\n", strlen("hello"));

	printf("testing my function: %zu\n", ft_strlen(""));
	printf("testing woth original: %zu\n\n", strlen(""));

	printf("testing my function: %zu\n", ft_strlen("ABCDefghjJKLMn987"));
	printf("testing woth original: %zu\n", strlen("ABCDefghjJKLMn987"));*/

	return (0);
}
