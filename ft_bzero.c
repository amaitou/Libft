/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:55:25 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/09 18:11:30 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 
 	"ft_bzero" zeroes the given memory according to "n" bytes which is the number 
	of blocks to be zeroed.
	the function takes a void pointer which must be cast to "unsigned
   	char" since the "ft_bzero" assigns zeroes to the memory byte per byte.

	looping over each block of memory and assigning it zero
	is a traditional way but using ft_memset which performs the same operation
	is more helpful and provides less code.

 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
