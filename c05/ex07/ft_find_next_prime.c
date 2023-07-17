/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:14:08 by matesant          #+#    #+#             */
/*   Updated: 2023/06/15 12:01:02 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	else if (nb < 2)
		return (0);
	else if (nb % 2 == 0 || nb % 3 == 0 || nb % 5 == 0 || nb % 7 == 0)
		return (0);
	else
		return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && (!ft_is_prime(nb)))
	{
		nb++;
	}
	return (nb);
}

//#include <stdio.h>

//int	main(void)
//{
//	int	prime;

//	prime = ft_find_next_prime(-2147483648);
//	printf("%d", prime);
//}