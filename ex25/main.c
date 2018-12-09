/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:24:37 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/05 14:57:22 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_foreach(int *tab, int length, void(*f)(int));

void	ft_putnbr(int i)
{
	printf("%d", i);
}	

int main()
{
	void	(*f)(int);
	f = &(ft_putnbr);
	int arr[] = {1,2,3};
	int x = 3;
	ft_foreach(arr, x, f);
	return(0);
}
