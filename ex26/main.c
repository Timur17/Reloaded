/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 14:58:02 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/05 15:13:41 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_count_if(char **tab, int(*f)(char*));

int	ft_point(char *tab)
{
	int i;

	i = 0;
	while(tab[i] != '\0')
	{
		if(tab[i] == 'l')
			return(1);
		i++;
	}
	return(0);	
}

int	main()
{
	int c;
	char *tab[] = {"Timur", "Alisa", "Alla", 0};
	c = ft_count_if(tab, ft_point);
	printf("%d", c);
	return(0);
}
