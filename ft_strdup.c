/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <ltacos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:27:32 by ltacos            #+#    #+#             */
/*   Updated: 2021/11/09 17:27:34 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*pS1;
	size_t	i;

	i = 0;
	pS1 = (char *)malloc(ft_strlen(s1) + 1);
	if (!pS1)
		return (NULL);
	while (s1[i] != '\0')
	{
		pS1[i] = s1[i];
		i++;
	}
	pS1[i] = '\0';
	return (pS1);
}
