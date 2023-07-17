/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:35:30 by matesant          #+#    #+#             */
/*   Updated: 2023/06/01 15:17:45 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfa;

	alfa = 97;
	while (alfa < 123)
	{
		write(1, &alfa, 1);
		alfa++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }