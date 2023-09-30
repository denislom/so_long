/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:25:58 by dlom              #+#    #+#             */
/*   Updated: 2023/09/30 20:25:59 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int)ft_strlen((char *)s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)(s + len));
		}
		len--;
	}
	return (0);
}
