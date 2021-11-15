/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltacos <ltacos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:25:16 by ltacos            #+#    #+#             */
/*   Updated: 2021/11/14 19:47:03 by ltacos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	podshetCiverok(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i += 1;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		vsegoCiferok;
	char	*pStr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	vsegoCiferok = podshetCiverok(n);
	pStr = (char *)malloc(vsegoCiferok + 1);
	if (!pStr)
		return (NULL);
	pStr[vsegoCiferok] = '\0';
	if (n < 0)
	{
		pStr[0] = '-';
		n = -n;
	}
	while (n > 0 && vsegoCiferok--)
	{
		pStr[vsegoCiferok] = '0' + (n % 10);
		n /= 10;
	}
	return (pStr);
}
