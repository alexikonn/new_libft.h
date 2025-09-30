/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 14:37:32 by alegesle          #+#    #+#             */
/*   Updated: 2025/09/30 17:07:45 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf("Is correct: %d\n", ft_isalpha('a'));
	printf("Is correct: %d\n", ft_isalpha('Z'));
	printf("is wrong: %d\n", ft_isalpha('\n'));
	printf("is wrong: %d\n\n", ft_isalpha('_'));



	printf("original when correct: %d\n", isalpha('a'));
	printf("original when incorrect: %d\n", isalpha('Z'));
	printf("is wrong: %d\n", isalpha('\n'));
	printf("is wrong: %d\n", isalpha('_'));

	return (0);
}
