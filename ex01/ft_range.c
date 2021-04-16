/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:55:11 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/16 23:24:52 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *vet;
	int i;

	if (min >= max)
		return (NULL);
	vet = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		vet[i] = min;
		i++;
		min++;
	}
	return (vet);
}
