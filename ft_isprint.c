/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 17:08:39 by alegesle          #+#    #+#             */
/*   Updated: 2025/09/30 17:25:53 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*alternative way for boolean-like functions: simple true/false decision
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}*/ 

int	main(void)
{
	printf("my function printable: %d\n", ft_isprint(32));
	printf("my function non-printable: %d\n\n", ft_isprint(127));

	printf("orig function printable: %d\n", isprint(32));
	printf("orig function non-printable: %d\n\n", isprint(127));

	return (0);
}