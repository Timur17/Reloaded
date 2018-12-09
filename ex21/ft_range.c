/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 21:15:37 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/29 22:28:00 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	int l;
	int *new;

	i = 0;
	if(max <= min)
		return(NULL);
	else
	{
		l = max -min;
		new = (int*)malloc(sizeof(*new)*(l+1));
				while(min < max)
				{
				new[i] = min;
				min ++;
				i++;
				}
				return(new);
	}
}
