/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:17:27 by matesant          #+#    #+#             */
/*   Updated: 2023/06/01 15:17:43 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	short	alfa;

	alfa = 122;
	while (alfa > 96)
	{
		write(1, &alfa, 1);
		alfa--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }