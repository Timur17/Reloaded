/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wtorwold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:16:03 by wtorwold          #+#    #+#             */
/*   Updated: 2018/12/01 17:16:26 by wtorwold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
