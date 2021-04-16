/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:26:42 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/16 18:40:46 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strdup(char *src)
{
	char	*str;
	int		i;

	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
