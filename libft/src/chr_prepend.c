/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chr_prepend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chughes <chughes@student.42quebec.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 09:57:54 by chughes           #+#    #+#             */
/*   Updated: 2022/10/03 20:51:15 by chughes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// Prepends 'c' to 'str' and frees 'str'
char	*chr_prepend(int c, char *str)
{
	char	*rtn;

	if (str == NULL)
		return (NULL);
	rtn = ft_calloc((ft_strlen(str) + 2), sizeof(char));
	rtn[0] = c;
	if (str[1])
		ft_strlcpy(&rtn[1], str, ft_strlen(str));
	free(str);
	return (rtn);
}
