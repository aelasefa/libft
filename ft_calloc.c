/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:54:51 by ayelasef          #+#    #+#             */
/*   Updated: 2024/10/24 15:44:42 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	 void	*arr;
	 
	 arr = malloc(count * size);
	 if (!arr)
		 return (NULL);
	 ft_bzero(arr, count * size);
	 return (arr);
}
