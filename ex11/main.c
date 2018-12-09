/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 18:18:39 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/29 23:03:10 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main()
{
	int a;
	int b;
	int *div;
	int *mod;
	div = &a;
	mod  = &b;

	a = 28;
	b = 8;
	ft_div_mod(a,b,div,mod);
	printf("%d\n%d", a, b);
	return(0);
}
