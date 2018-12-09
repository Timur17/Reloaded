/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:02:13 by wtorwold          #+#    #+#             */
/*   Updated: 2018/11/26 21:37:05 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_print_params(char *argv)
{
	int i;

	i = 0;
	while(argv[i] != '\0')
	{
		ft_putchar(argv[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc > 1)
		while(argc > i)
		{
			ft_print_params(argv[i]);
			ft_putchar('\n');
			i++;
		}
	return(0);
}
