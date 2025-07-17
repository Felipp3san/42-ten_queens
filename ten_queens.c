/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten_queens.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 17:00:55 by fde-alme          #+#    #+#             */
/*   Updated: 2025/07/17 21:10:30 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ten_queens.h"

t_bool	is_valid_movement(int *queens, int idx, int position)
{
	if (!has_queen_in_row(queens, idx, position)
		&& !has_queen_in_diagonal(queens, idx, position))
		return (TRUE);
	else
		return (FALSE);
}

void	print_queens(int *queens)
{
	ssize_t	i;

	i = -1;
	while (++i < BOARD_SIZE)
		write(1, &queens[i], 1);
	write(1, "\n", 1);
}

void	get_combinations(int queens[], int position, int idx)
{
	if (idx == BOARD_SIZE)
	{
		print_queens(queens);
		return ;
	}
	while (position < BOARD_SIZE)
	{
		if (is_valid_movement(queens, idx, position))
		{
			queens[idx] = position;
			get_combinations(queens, 0, idx + 1);
		}
		position++;
	}
}

int	main(void)
{
	int	queens[10];

	get_combinations(queens, 0, 0);
	return (0);
}
