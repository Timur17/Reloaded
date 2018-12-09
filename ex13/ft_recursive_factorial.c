/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 17:17:51 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/29 17:35:21 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb == 0)
		return(1);
	else
		if ( nb < 0 || nb >12)
			return(0);
		else
		{
			nb = nb * ft_recursive_factorial(nb - 1);
			return(nb);
		}
}
