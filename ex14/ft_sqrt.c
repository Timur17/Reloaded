/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:44:22 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/29 19:51:20 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;

	i = 1;
	if(nb <= 0 || nb >2147483647)
		return(0);
	else
	{
		while(i*i <= nb)
		{
			if(i*i == nb)
				return(i);
			else
				i++;
		}
		return(0);
	}
}
