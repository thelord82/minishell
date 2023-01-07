/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chr_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:47:53 by chughes           #+#    #+#             */
/*   Updated: 2022/10/04 15:08:28 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Appends 'c' to 'str' and frees 'str'
char	*chr_append(int c, char *str)
{
	char	*rtn;
	int		i;

	if (str == NULL)
		return (NULL);
	rtn = ft_calloc((ft_strlen(str) + 2), sizeof(char));
	i = -1;
	while (str[++i])
		rtn[i] = str[i];
	rtn[i] = c;
	free(str);
	return (rtn);
}
