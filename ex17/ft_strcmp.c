/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 19:29:56 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/01 14:21:26 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while(s1[i] == s2[i] && (s1[i] != '\0'|| s2[i] != '\0'))
	{
		i++;
	}
	if(s1[i] == s2[i])
		return(0);
	else
	if(s1[i] == '\0')
		return(-1);
	else
		if(s2[i] == '\0')
			return(1);
		else 
			return(s1[i] - s2[i]);

}

int main()
{
	int x;
	char s1[100];
	char *s2 = "Timc";
	scanf("%s",s1);	
	x = ft_strcmp(s1,s2);
	printf("%d", x);
	return(0);
}
