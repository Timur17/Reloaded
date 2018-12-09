/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:06:38 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/29 22:28:50 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int *ft_range(int min, int max);

int	main()

{
	int i = 0;
	int min, max, l;
	min = -1;
	max = -10;
	l = max - min;
	int *new;
	new = ft_range(min, max);
	while(i < l)
	{
		printf("%d", new[i]);
		i++;
	}
	return(0);
}
