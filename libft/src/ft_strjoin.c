/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mallard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:47:49 by mallard           #+#    #+#             */
/*   Updated: 2017/08/30 15:25:21 by mallard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	i = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = ft_strnew(i + 1);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	str[i + 1] = '\0';
	return (str);
}
