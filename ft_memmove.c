/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:10:12 by amait-ou          #+#    #+#             */
/*   Updated: 2023/06/27 18:16:20 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 	
   we have created "ft_memcpy" but that last doesn't care at all about the 
   overlap as it returns undefined, my "ft_memmove" has been created to 
   handle this problem.
   to copy from a source into a destination there are only three cases

   	case 1:
   		when the "src" and "dst" point at the same block of memory, in this
		case there is no need to perform a copying operation since they are
		the same.
	
	case 2:
		when the "src" is greater than the "dst", in this case, you might
		want to use memcpy as an option or just loop over the src and copy
		n elements starting from the beginning.
	
	case 3:
		when the "dst" is greater than "src", here is why "ft_memmove" 
		was made to handle what is called "Memory Overlap" where we lost 
		the data by overwriting it. memmove uses a temporary memory allocation 
		to store the data to be copied from "src "to "dst", and since 
		the malloc is forbidden in this part, there is another way to copy 
		from "src" to "dst" without overlapping by using the copying from len 
		to 0 (reversely) and this method is powerful in avoiding "Memory Overlapping"
 
 */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (d > s)
	{
		while (len--)
			*(d + len) = *(s + len);
	}
	else
		ft_memcpy(d, s, len);
	return ((void *)d);
}
