/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 14:59:45 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/28 14:59:47 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** NOM
** strstr, locate a substring in a string
**
** DESCRIPTION
** The Fn strnstr function locates the first occurrence of the null-terminated
** string Fa little in the string Fa big , where not more than Fa len characters
** are searched. Characters that appear after a `\0' character are not searched.
** Since the Fn strnstr function is a Fx specific API, it should only be used 
** when portability is not a concern.
**
** RETURN VALUES
** If Fa little is an empty string, Fa big is returned; if Fa little occurs
** nowhere in Fa big , NULL is returned; otherwise a pointer to the first
** character of the first occurrence of Fa little is returned.

*/

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return ((char *)str);
	i = 0;
	while (str[i] && (size_t)i < len)
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && i + j < len)
			{
				if (to_find[j + 1] == '\0')
					return ((char *)&str[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
