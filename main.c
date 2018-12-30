/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 03:18:59 by abaurens          #+#    #+#             */
/*   Updated: 2018/12/30 20:15:13 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_bigint.h"
#include "ft_bigfloat.h"
#include "libft.h"
#include "bnum.h"

int				main(void)
{
	t_bflt	*f1;
	t_bflt	*f2;
	t_bflt	*r;

	f1 = new_bflt("2.42");
	f2 = new_bflt("2.42");
	print_bflt(f1);
	print_bflt(f2);
	r = mul_bflt(f1, f2);
	print_bflt(r);
	del_bflt(r);
	del_bflt(f2);
	del_bflt(f1);
	return (0);
}
