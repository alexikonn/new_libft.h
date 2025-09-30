/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:36:59 by alegesle          #+#    #+#             */
/*   Updated: 2025/09/30 17:06:47 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
int	main(void)
{
	printf("My function correct: %d\n", ft_isascii(44));
	printf("My function incorrect: %d\n\n", ft_isascii(130));

	printf("orig functions correct: %d\n", isascii(44));
	printf("orig functions incorrect: %d\n", isascii(130));

	return (0);
}

