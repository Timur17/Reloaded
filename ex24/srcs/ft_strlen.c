/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:02:13 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/01 17:38:50 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//void	ft_putchar(char c);
//void	ft_putstr(char *argv);
//int ft_strcmp(char *s1, char *s2);
//void	ft_swp(char **a, char **b);
#include "file.h"

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
