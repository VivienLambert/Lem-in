/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 11:49:18 by ayguillo          #+#    #+#             */
/*   Updated: 2019/05/20 13:25:50 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft/libft.h"
#include "lemin.h"

void	ft_error(char *line, t_all *all)
{
	if (line)
		ft_strdel(&line);
	if (all->map)
		free_chain(all->map, TRUE);
	if (all->str)
		ft_strdel(&(all->str));
	if (all->queue)
		free_chain(all->queue, FALSE);
	ft_putstr_fd("ERROR\n", 2);
	exit(-1);
}
