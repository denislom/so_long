/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlom <dlom@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 20:27:05 by dlom              #+#    #+#             */
/*   Updated: 2023/09/30 21:13:32 by dlom             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	enemy_move(t_win *me)
{
	if (((*me).map.layout[(*me).map.enemy_coor.y
				+ (*me).enmv][(*me).map.enemy_coor.x] != '1'))
	{
		(*me).map.layout[(*me).map.enemy_coor.y][(*me).map.enemy_coor.x] = '0';
		(*me).map.layout[(*me).map.enemy_coor.y
			+ (*me).enmv][(*me).map.enemy_coor.x] = 'S';
		(*me).map.enemy_coor.y += (*me).enmv;
	}
	else
		(*me).enmv *= -1;
}

void	move(t_win *me, int yc, int xc)
{
	if (((*me).map.layout[(*me).map.player_coor.y
				+ yc][(*me).map.player_coor.x + xc] != '1')
	&& ((*me).map.layout[(*me).map.player_coor.y
				+ yc][(*me).map.player_coor.x + xc] != 'E'))
	{
		if ((*me).map.layout[(*me).map.player_coor.y
				+ yc][(*me).map.player_coor.x + xc] == 'C')
			(*me).map.collectible--;
		(*me).map.layout[(*me).map.player_coor.y]
		[(*me).map.player_coor.x] = '0';
		(*me).map.layout[(*me).map.player_coor.y
			+ yc][(*me).map.player_coor.x + xc] = 'P';
		(*me).map.player_coor.y += yc;
		(*me).map.player_coor.x += xc;
		(*me).movec++;
	}
	if ((*me).map.collectible == 0)
	{
		(*me).map.layout[(*me).map.exit_coor.y][(*me).map.exit_coor.x] = 'X';
	}
}

void	map_initialization(t_map *map)
{
	(*map).layout = NULL;
	(*map).height = 0;
	(*map).width = 0;
	(*map).collectible = 0;
	(*map).exit = 0;
	(*map).start = 0;
	(*map).player_coor.x = 0;
	(*map).player_coor.y = 0;
	(*map).exit_coor.x = 0;
	(*map).exit_coor.y = 0;
	(*map).enemy_coor.y = 0;
	(*map).enemy_coor.y = 0;
}
