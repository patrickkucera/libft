/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:17:45 by pakucera          #+#    #+#             */
/*   Updated: 2021/12/22 14:30:10 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r');
}

int	ft_atoi(const char *str)
{
	int	nb;
	int	is_negative;

	nb = 0;
	is_negative = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			is_negative = -is_negative;
	while (*str != '\0' && '0' <= *str && *str <= '9')
	{
		nb = *str - '0' + 10 * nb;
		str++;
	}
	return (nb * is_negative);
}
