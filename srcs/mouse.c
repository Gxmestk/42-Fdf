/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhemniw <gt.khemniwat@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:08:31 by tkhemniw          #+#    #+#             */
/*   Updated: 2022/10/29 18:34:26 by tkhemniw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "optkeysym.h"
#include "event.h"
#include "defines.h"
#include "mlx.h"
#include "map.h"
#include "unistd.h"
#include "transform.h"
#include "color.h"
#include "math.h"
#include "utils.h"
#include <stdio.h>

int	mouse_move(int x, int y, t_mlx *mlx)
{
	if (mlx->e.l_ck == YES)
	{
		mlx->tf.tx += x - mlx->tf.ix;
		mlx->tf.ty += y - mlx->tf.iy;
		mlx->tf.ix = x;
		mlx->tf.iy = y;
	}
	if (mlx->e.r_ck == YES)
	{
		add_rot_ang(mlx, M_PI / WY * (mlx->tf.iay - y), X);
		add_rot_ang(mlx, M_PI / WX * (mlx->tf.iax - x), Y);
		mlx->tf.iay = y;
		mlx->tf.iax = x;
	}
	return (0);
}

int	mouse_release(int butsym, int x, int y, t_mlx *mlx)
{
	(void)x;
	(void)y;
	if (butsym == LEFT_CK)
		mlx->e.l_ck = NO;
	if (butsym == RIGHT_CK)
		mlx->e.r_ck = NO;
	return (0);
}

int	mouse_press(int butsym, int x, int y, t_mlx *mlx)
{
	if (butsym == LEFT_CK)
	{
		mlx->tf.ix = x;
		mlx->tf.iy = y;
		mlx->e.l_ck = YES;
	}
	if (butsym == RIGHT_CK)
	{
		mlx->tf.iax = x;
		mlx->tf.iay = y;
		mlx->e.r_ck = YES;
	}
		
	return (0);
}

