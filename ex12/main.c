/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:39:42 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/29 23:16:23 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb);

int	main()
{
	int x, y;
	
	scanf("%d", &x);
	y = ft_iterative_factorial(x);
	printf("%d", y);
	return(0);
}
