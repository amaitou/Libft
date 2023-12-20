/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:18:49 by amait-ou          #+#    #+#             */
/*   Updated: 2023/06/27 18:15:28 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 	
 	this function checks if the given character is a valid 7-bit.
	
	- 7-bit chars are the characters that have 7 bits in their 
	binary representation when they got converted from "ASCII" to "binary"

	0   -> 0
	127 -> 1111111

 */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c <= 127 && c >= 0);
}
