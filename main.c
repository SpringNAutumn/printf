/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:24:44 by marvin            #+#    #+#             */
/*   Updated: 2023/12/06 11:24:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main (void)
{
    int numi1 = 123321;
    int numo2 = 31123;
    int hexiCap = 12332;
    int hexiNocap = 3141;
    char *charizard = "holabuenastardes";
    char charo = 'o';
    char porcento = '%';


    printf(" el primer numero es: %p", (void *) -14523);
    //ft_printf(" el primer numero es: %s y el segundo numero: %s\n", "", "NULL");
/*
    ft_printf(" el primer numero es: %X y el segundo numero: %x", hexiCap, hexiNocap);
    ft_printf(" el primer numero es: %c y el segundo numero: %%", charo, porcento);
    ft_printf(" el primer numero es: %s ", charizard);
*/


/*
    ft_printf( "el segundo numero: %%"); // ¿que ocurre aqui.
    printf("el segundo numero es %%");
    printf("el segundo numero es %%", '%');
    printf("el segundo numero es %%");
*/

}