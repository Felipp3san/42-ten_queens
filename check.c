/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:00:51 by fde-alme          #+#    #+#             */
/*   Updated: 2025/07/17 21:10:53 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ten_queens.h"

t_bool	has_queen_in_row(int queens[], int idx, int position)
{
	ssize_t	i;

	i = -1;
	while (++i < idx)
	{
		if (queens[i] == position)
			return (TRUE);
	}
	return (FALSE);
}

t_bool	has_queen_in_diagonal(int queens[], int idx, int position)
{
	ssize_t	i;
	int		target;

	i = idx;
	target = position;
	while (--i >= 0 && --target >= 0)
	{
		if (queens[i] == target)
			return (TRUE);
	}
	i = idx;
	target = position;
	while (--i >= 0 && ++target < BOARD_SIZE)
	{
		if (queens[i] == target)
			return (TRUE);
	}
	return (FALSE);
}
