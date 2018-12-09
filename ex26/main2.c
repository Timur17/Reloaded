/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 14:58:02 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/05 15:11:00 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_point(char *tab)
{
	int i;

	i = 0;
	while(tab[i] != '\0')
	{
		if(tab[i] == 'z')
			return(1);
		i++;
	}
	return(0);	
}

int ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while(tab[i] != 0)
	{
		if(f(tab[i]) == 1)
		   c++;
	i++;	
	}
	return(c);
}

int	main()
{
	int c;
	char *tab[] = {"Timur", "Alisa", "Alla", 0};
	c = ft_count_if(tab, ft_point);
	printf("%d", c);
	return(0);
}
