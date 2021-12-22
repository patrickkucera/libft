/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   punition.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:20:18 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/26 16:29:48 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	punition(int nombredefoi)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		printf("Hello\n");
		i++;
	}
}

int	main(int argc, char *argv[])
{
	punition(10);
	return (0);
}
