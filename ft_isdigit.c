/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 15:32:36 by alegesle          #+#    #+#             */
/*   Updated: 2025/09/30 17:17:15 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//standard c header file, part of C standard library
//provides a set of functions, f.ex. original "isdigit" function

//return type int: standard for boolean (1 true, 0 false)
int	ft_isdigit(int c) //parameter declaration, takes int even though we're checking characters
{
	if (c >= '0' && c <= '9') //characters are stored as integers (ASCII values)
		return (1);			// '0'(type char-take 1byte of mem) = 48 converted and passed as int in ASCII value
	else
		return (0);
}
// && logical AND operator (both conditions must be true, combines them)

int	main(void)
{
	printf("is digit: %d\n", ft_isdigit('0'));
	printf("not a digit: %d\n\n", ft_isdigit('A'));

	printf("orig is digit: %d\n", isdigit('0'));
	printf("orig not digit: %d\n\n", isdigit('A'));

	return (0);
}
