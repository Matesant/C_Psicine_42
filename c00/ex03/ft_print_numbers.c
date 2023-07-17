/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:37:46 by matesant          #+#    #+#             */
/*   Updated: 2023/06/01 15:17:41 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	short	alfa;

	alfa = 48;
	while (alfa < 58)
	{
		write(1, &alfa, 1);
		alfa++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// }