/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarin-m <gmarin-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:13:27 by gmarin-m          #+#    #+#             */
/*   Updated: 2023/12/08 18:58:34 by gmarin-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(char *impreso, ...);
int	checking_chicks(char checko, va_list args);
int	sexihexi(unsigned long long int valori, int cov);
int	sexideci(long long int valori);
int	charizard(char *chari);
int	singlecharizard(int chari);

#endif
