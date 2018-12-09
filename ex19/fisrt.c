I/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 21:02:13 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/01 14:40:37 by wtorwold         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	dest[i + 1] = '\0';
	return(dest);

}


int	main(int argc, char **argv)
{
	int i;
	int a;
	char temp[10000] = {0};

	i = 1;
	if(argc > 1)
		while(argc > i)
		{
			a = ft_strcmp(argv[i], argv[i + 1]);
			if(a > 0)
			{
				ft_strcpy(temp, argv[i + 1]);
				ft_strcpy(argv[i + 1], argv[i]);
				ft_strcpy(argv[i], temp);
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
