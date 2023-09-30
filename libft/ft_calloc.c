/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:21:42 by dlom              #+#    #+#             */
/*   Updated: 2023/09/30 20:21:43 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	arr = (void *)malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
	{
		arr = malloc(0);
		return (arr);
	}
	if (((nmemb * size) / nmemb) != size)
		return (0);
	if (!arr)
		return (0);
	ft_bzero(arr, (nmemb * size));
	return (arr);
}
