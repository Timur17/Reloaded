/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:39:42 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/29 23:18:26 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb);

int	main()
{
	int x;
	int y;
	x = 5;
	y = ft_recursive_factorial(x);
	printf("%d", y);
	return(0);
}
