/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_realloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:34:25 by malord            #+#    #+#             */
/*   Updated: 2022/10/13 12:06:03 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	*int_realloc(int *old_array, int old_size, int size)
{
	int		*new_array;
	int		i;

	new_array = ft_calloc(size + 1, sizeof(int));
	i = 0;
	while (i < old_size)
	{
		new_array[i] = old_array[i];
		i++;
	}
	old_array = xfree(old_array);
	return (new_array);
}
