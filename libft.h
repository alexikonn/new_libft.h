/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alegesle <alegesle@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 16:04:11 by alegesle          #+#    #+#             */
/*   Updated: 2025/09/30 17:17:15 by alegesle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include preprocessor directive is used to make definitions of functions, constants & macros
// these are defined in header file & are available in other C code
//when headerfile is used, it is put "header.h" - it marks user defined header files
//needs to be in the same folder as .c files


//include guard
//prevents multiple inclusion of the header file
#ifndef LIBFT_H //conditional definition - header guard
# define LIBFT_H

# include <stdio.h> //for prtinf
# include <stdlib.h> //for atoi, malloc
# include <string.h> //for str functions
# include <ctype.h> //for char handling functions

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

#endif