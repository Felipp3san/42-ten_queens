/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ten_queens.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-alme <fde-alme@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:49:11 by fde-alme          #+#    #+#             */
/*   Updated: 2025/07/17 21:11:03 by fde-alme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEN_QUEENS_H
# define TEN_QUEENS_H

# include <stdlib.h>
# include <unistd.h>

# define BOARD_SIZE 10

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

// check.c
t_bool	has_queen_in_row(int queens[], int idx, int position);
t_bool	has_queen_in_diagonal(int queens[], int idx, int position);

#endif
