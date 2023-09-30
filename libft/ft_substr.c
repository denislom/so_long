/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:26:09 by dlom              #+#    #+#             */
/*   Updated: 2023/09/30 20:26:10 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*arr;
	size_t	size;

	if (!s)
		return (0);
	size = ft_strlen(&s[start]);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > size)
		len = size;
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (0);
	ft_strlcpy(arr, &s[start], len + 1);
	return (arr);
}
