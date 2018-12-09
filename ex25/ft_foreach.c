/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:24:37 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/05 14:56:31 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */	
void ft_foreach(int *tab, int length, void(*f)(int))

{	
	int i;
	i = 0;
	while(i < length)
	{
		f(tab[i]);
		i++;
	}

}
