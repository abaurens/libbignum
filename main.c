/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 03:18:59 by abaurens          #+#    #+#             */
/*   Updated: 2018/12/20 21:08:21 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_bigint.h"
#include "ft_bigfloat.h"

int				main(void)
{
	t_bint	*n;
	t_bint	*n2;
	t_bint	*r;

	n = new_bint("42");
	n2 = new_bint("42");
	write(1, "  ", 2);
	print_bint(n);
	write(1, "* ", 2);
	print_bint(n2);
	r = mul_bint(n, n2);
	del_bint(n);
	del_bint(n2);
	write(1, "  ", 2);
	print_bint(r);
	del_bint(r);
	return (0);
}
