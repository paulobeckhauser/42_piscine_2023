/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:12:20 by pabeckha          #+#    #+#             */
/*   Updated: 2023/10/16 20:13:02 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
}

void	ft_print_numbers(void)
{
	char	value;

	value = '0';
	while (value <= '9')
	{
		ft_putchar(value);
		value++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
