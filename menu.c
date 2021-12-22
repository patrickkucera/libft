/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   menu.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pakucera <pakucera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:38:26 by pakucera          #+#    #+#             */
/*   Updated: 2021/11/26 16:45:33 by pakucera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	menu(void)
{
	int	choix = 0;
	
	while (choix < 1 || choix >2)
	{
		printf("Menu :\n");
		printf("1. pizza\n");
		printf("2. pasta\n");
		printf("Votre Choix ?");
		scanf("%d", &choix);
	}
	return (choix);
}

int main(int argc, char *argv[])
{
	switch (menu())
	{
		case 1:
			printf ("Vous avez pris la pizza");
			break;
		case 2:
			printf ("Vous avez pris les pates");
			break;
	}
	return (0);
}