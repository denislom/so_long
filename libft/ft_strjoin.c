/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:25:15 by dlom              #+#    #+#             */
/*   Updated: 2023/09/30 20:25:16 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	arr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!arr)
		return (0);
	while (s1[j] != '\0')
	{
		arr[i++] = s1[j++];
	}
	j = 0;
	while (s2[j] != '\0')
	{
		arr[i++] = s2[j++];
	}
	arr[i] = '\0';
	return (arr);
}
