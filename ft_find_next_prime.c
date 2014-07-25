/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhordern <lhordern@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/05 12:55:48 by lhordern          #+#    #+#             */
/*   Updated: 2014/02/05 13:10:55 by lhordern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_find_next_prime(int nb);

int		main()
{
	ft_find_next_prime(62);
	ft_putchar('\n');
	return (0);
}

void	ft_find_next_prime(int nb)
{
	if (nb < 2 || (nb != 2 && (nb % 2 == 0)) || (nb != 3 && (nb % 3 == 0))
		|| (nb != 5 && (nb % 5 == 0)) || (nb != 7 && (nb % 7 == 0))
		|| (nb != 9 && (nb % 9 == 0)))
		ft_find_next_prime(nb + 1);
	else
		ft_putnbr(nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}
