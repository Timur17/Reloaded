/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:02:13 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/01 14:52:21 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *argv)
{
	int i;

	i = 0;
	while(argv[i] != '\0')
	{
		ft_putchar(argv[i]);
		i++;
	}
}

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


void	ft_swp(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}


int	main(int argc, char **argv)
{
	int i;
	int a;

	i = 1;
		while (i < argc - 1)
		{
			a = ft_strcmp(argv[i], argv[i + 1]);
			if (a > 0)
			{
				ft_swp(&argv[i], &argv[i + 1]);
				i = 1;
			}
			else
				i++;
		}
	i = 1;
	while(argc > i)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return(0);
}
