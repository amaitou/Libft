/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:11:30 by amait-ou          #+#    #+#             */
/*   Updated: 2022/10/06 16:55:22 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	j;

	h = (char *)haystack;
	n = (char *)needle;
	if (!h && !len)
		return (NULL);
	if (!*n)
		return (h);
	while (*h && len)
	{
		j = 0;
		while (h[j] == n[j] && j < len && h[j])
			++j;
		if (!n[j])
			return (h);
		++h;
		--len;
	}
	return ((void *)0);
}
