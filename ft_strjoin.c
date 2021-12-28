/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:59:11 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/28 14:59:13 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	d = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&d[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (d);
}
