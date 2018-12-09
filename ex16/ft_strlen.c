/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:18:34 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/26 19:24:40 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>   

int ft_strlen(char *str)
{
	int i;
	i = 0;
	
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}   

int main()
{
	int x;
	char *str = "Timur";
	x = ft_strlen(str);
	printf("%d",x);
	return(0);
}   
