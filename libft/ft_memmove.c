/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:23:58 by dlom              #+#    #+#             */
/*   Updated: 2023/09/30 20:23:59 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;

	if (src == 0 && dest == 0)
		return (0);
	i = 0;
	if ((unsigned char *)dest < (unsigned char *)src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[n - i - 1] = \
				((unsigned char *)src)[n - i - 1];
			i++;
		}
	}
	return ((unsigned char *)dest);
}
