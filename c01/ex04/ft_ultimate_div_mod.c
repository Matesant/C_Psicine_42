/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 11:46:19 by matesant          #+#    #+#             */
/*   Updated: 2023/06/06 15:12:17 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

// #include <stdio.h>
// 
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 5;
// 	b = 5;
// 	printf("a : %d, e b : %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a : %d, e b : %d\n", a, b);
// }
