/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabeckha <pabeckha@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:19:07 by pabeckha          #+#    #+#             */
/*   Updated: 2023/10/16 16:38:49 by pabeckha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(void)
{
	char	text;

	text = 'a';
	ft_putchar(text);
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
