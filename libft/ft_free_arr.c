/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abackman <abackman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:56:43 by abackman          #+#    #+#             */
/*   Updated: 2021/12/15 15:38:14 by abackman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_free_arr(char **str, size_t size)
{
	while (size >= 0)
	{
		if (str[size])
		{	
			ft_bzero(str[size], ft_strlen(str[size]));
			free(str[size]);
		}
		size--;
	}
	free(str);
	return (NULL);
}
