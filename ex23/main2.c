/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 21:38:31 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/05 14:42:47 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "ft_point.h"
#include <stdio.h>

typedef struct
{
	int x;
	int y;
}t_point;

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);
	printf("%d\t%d", point.x, point.y);
	return (0);
}
