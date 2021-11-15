/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <ltacos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:50:13 by ltacos            #+#    #+#             */
/*   Updated: 2021/10/18 18:36:57 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pDst;
	unsigned char	*pSrc;

	pDst = (unsigned char *)dst;
	pSrc = (unsigned char *)src;
	if (!src && !dst)
		return (NULL);
	if (src < dst)
		while (len--)
			pDst[len] = pSrc[len];
	else
		while (len--)
			*pDst++ = *pSrc++;
	return (dst);
}
