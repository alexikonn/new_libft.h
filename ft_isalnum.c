/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:55:57 by alegesle          #+#    #+#             */
/*   Updated: 2025/09/30 17:16:39 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int	main(void)
{
	printf ("my function correct: %d\n", ft_isalnum('d'));
	printf ("my function incorrect: %d\n\n", ft_isalnum('\n'));

	printf ("orig correct: %d\n", isalnum('d'));
	printf ("orig incorrect: %d\n", isalnum('\n'));

	return (0);
}