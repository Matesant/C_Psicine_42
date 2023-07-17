/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 12:05:32 by matesant          #+#    #+#             */
/*   Updated: 2023/06/06 15:06:49 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	let;

	let = 0;
	while (str[let])
	{
		ft_putchar(str[let]);
		let++;
	}
}

/* #include <stdio.h>

int	main(void)
{
	ft_putstr("UIUIUI");
}
 */