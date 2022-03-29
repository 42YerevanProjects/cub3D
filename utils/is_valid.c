/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 07:33:20 by shovsepy          #+#    #+#             */
/*   Updated: 2022/03/29 07:33:49 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

int	is_valid(char *file)
{
	int	i;

	i = ft_strlen(file) - 1;
	if (file[i - 3] == '.' && file[i - 2] == 'c'
		&& file[i - 1] == 'u' && file[i] == 'b')
		return (1);
	return (0);
}
