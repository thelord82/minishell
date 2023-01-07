/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malord <malord@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 07:48:44 by malord            #+#    #+#             */
/*   Updated: 2022/10/03 07:49:05 by malord           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Frees the void pointer sent as a parameter
char	*ft_free(void *ptr)
{
	if (ptr)
	{
		free (ptr);
		ptr = NULL;
	}
	return (NULL);
}
