/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:41:09 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/29 22:49:39 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr);

int	main()
{
	int nbr;
	int *pnbr;

	nbr = 0;
	pnbr = &nbr;
	ft_ft(pnbr);
	printf("%d",nbr);
	return(0);
}
