/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:22:34 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/16 19:15:45 by mmassaak         ###   ########.fr       */
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

int			ft_str_size(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		total_size;

	i = 0;
	total_size = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			total_size++;
			j++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	total_size += i * (size - 1);
	return (total_size);
}

char		*ft_strcat(char *dest, char *src)
{
	int		dest_index;
	int		src_index;

	dest_index = 0;
	src_index = 0;
	while (dest[dest_index] != '\0')
		dest_index++;
	while (src[src_index] != '\0')
	{
		dest[dest_index + src_index] = src[src_index];
		src_index++;
	}
	dest[dest_index + src_index] = '\0';
	return (dest);
}

char		*ft_set_str_with_sep(int size, char **strs, char *sep)
{
	int		i;
	char	*resp;

	resp = (char *)malloc((ft_str_size(size, strs, sep) + 1) * sizeof(char));
	resp[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(resp, strs[i]);
		if (i < size - 1)
			ft_strcat(resp, sep);
		i++;
	}
	return (resp);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	char *response;

	if (size <= 0)
	{
		response = (char *)malloc(1 * sizeof(char));
		response[0] = '\0';
		return (response);
	}
	response = ft_set_str_with_sep(size, strs, sep);
	return (response);
}
