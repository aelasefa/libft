/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayelasef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:32:07 by ayelasef          #+#    #+#             */
/*   Updated: 2024/10/25 15:36:28 by ayelasef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_nb(long n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_rev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	if (str[0] == '-')
		i = 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		i;
	long	nn;

	nn = n;
	arr = malloc(sizeof(char) * ft_count_nb(nn));
	if (!arr)
		return (NULL);
	if (nn == 0)
		return ("0");
	i = 0;
	if (n < 0)
	{
		arr[0] = '-';
		nn *= -1;
		i++;
	}
	while (nn > 0)
	{
		arr[i] = (nn % 10) + '0';
		nn /= 10;
		i++;
	}
	return (ft_rev(arr));
}
