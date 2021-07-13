/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldoncker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:57:41 by ldoncker          #+#    #+#             */
/*   Updated: 2021/07/12 14:57:46 by ldoncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/server.h"
#include "../includes/client.h"

void	error(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
	exit(0);
}
