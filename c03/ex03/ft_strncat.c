/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:04:10 by matesant          #+#    #+#             */
/*   Updated: 2023/06/11 12:49:31 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i2 = 0;
	i = 0;
	while (dest[i2])
		i2++;
	while (src[i] != '\0' && (i < nb))
	{
		dest[i2 + i] = src[i];
		i++;
	}
	dest[i2 + i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char dest[100] = "quem é";

	printf("antes: %s\n", dest);
	ft_strncat(dest, " o menino de papai", 20);
	printf("depois: %s", dest);
}*/