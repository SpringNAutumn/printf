/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:13:27 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/12/06 13:22:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

int ft_printf(char *impreso, ...);
int checking_chicks(char checko, va_list args);
int sexidecihexi( long long int valori, int cov);
int charizard (char *chari);
int singlecharizard (int chari);

#endif