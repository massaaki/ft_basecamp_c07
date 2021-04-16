/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 04:33:00 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/16 22:47:09 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *vet;
	int i;

	if (range == NULL)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	vet = (int *)malloc((max - min) * sizeof(int));
	if (vet == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		vet[i] = min;
		min++;
		i++;
	}
	*range = vet;
	return (i);
}
