/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 19:12:25 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/05 19:20:48 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src);

int	main()
{
	char *dup;
	char *src = "Alla";
	dup = ft_strdup(src);
	printf("%s", dup);
	return(0);
}
