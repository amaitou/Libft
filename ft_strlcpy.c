/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:13:23 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/07 18:26:35 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 	
   ft_strlcpy copies "n - 1" bytes from the src to the destination and returns 
   the size of the src
	
   the only thing I have done here is checking if dstsize is 0 to avoid coping
   if is it not then ft_strlcpy will copy until "n - 1" since "n" is the '\0'

 */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(src);
	if (dstsize > 0)
	{
		while (*(src + i) && i < dstsize - 1)
		{
			*(dst + i) = *(src + i);
			++i;
		}
		*(dst + i) = '\0';
	}
	return (size);
}
