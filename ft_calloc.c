/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 02:23:18 by amait-ou          #+#    #+#             */
/*   Updated: 2023/06/27 18:15:14 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 
   Rather than malloc (see the man), the "ft_calloc" function uses malloc to allocate
   a block of memory according to the count (number of elements to be allocated) 
   and the size (the size of the element) then Calloc initializes each
   elements by zero.
   if the allocation fails from malloc the "ft_calloc" function will return
   "NULL" which is a null pointer and it could be written as "(void *)0".

   there are two ways to fill the allocated memory, either looping over each 
   element and assign it with zero or just using the function "ft_bzero" which
   its main role is zeroing memories

 */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count >= SIZE_MAX || size >= SIZE_MAX)
		return ((void *)0);
	p = malloc((size) * count);
	if (!p)
		return ((void *)0);
	ft_bzero(p, count * size);
	return (p);
}
