/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 03:07:54 by vodebunm          #+#    #+#             */
/*   Updated: 2024/02/05 21:22:10 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"

int	ft_prinft(const char *s, ...);
int	ft_str_printf(va_list list);
int	ft_hexaconvert_printf(va_list list);
int	ft_hexaconvert_up_printf(va_list list);
int	ft_int_dec_number_print(long long int n);

#endif