/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:13:27 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/11/23 19:33:20 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


int sexi_hexi(va_list valo, int Cap);
int ft_printf(char *impreso, ...);
int checking_chicks (char *check_chicks);
int decibelly(int belly);


#endif