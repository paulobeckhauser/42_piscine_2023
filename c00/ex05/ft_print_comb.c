/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:09:03 by pabeckha          #+#    #+#             */
/*   Updated: 2023/10/23 15:03:46 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);
void    cond_print(char *string);
void    ft_print_comb(void);

int main(void)
{
    ft_print_comb();
}

void    cond_print(char *string)
{
        
    // if (number[0] == '7' && number[1] == '8' 
    //     && number[2] == '9')
    // {
    //     number[3] = '\n';
    //     number[4] = '\n';

    //     write(1, &number, 5);
    // }
    // else
    // {
    //     number[3] = ',';
    //     number[4] = ' ';
    //     write(1, &number, 5);
    // }
    int i;

    i = 0;
    while(string[i])
    {
        write(1, &string[i], 1);
        i++;
    }
    
}

void    ft_print_comb(void)
{
    char number[5];
    int i;
    int j;
    int g;

    i = '0';
    j = '1';
    g = '2';

    number[0] = i;
    number[1] = j;
    number[2] = g;
    number[4] = ',';
    number[5] = ' ';
    // write(1, &number, 5);

    cond_print(number);


    // while(number != "789  ")
    // {
    //     number[0] = i;
    //     number[1] = j;
    //     number[2] = g;
    //     cond_print(number);
    //     i++;
    //     j++;
    //     g++;

    // }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
