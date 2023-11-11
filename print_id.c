/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_id.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asnaji <asnaji@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:34:07 by asnaji            #+#    #+#             */
/*   Updated: 2023/11/10 14:28:57 by asnaji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printid(va_list args)
{
	long long	nb;

	nb = va_arg(args, int);
	return (ft_putnbr(nb));
}
