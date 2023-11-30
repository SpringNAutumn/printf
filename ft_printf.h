/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:13:27 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/11/30 20:49:15 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(char *impreso, ...);
int sexi_hexi(long long int num, int base, int cap);
int decibelly(int belly);
int charizard (char *charo);

#endif