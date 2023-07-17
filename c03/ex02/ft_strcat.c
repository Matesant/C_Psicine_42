/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matesant <matesant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 11:07:05 by matesant          #+#    #+#             */
/*   Updated: 2023/06/12 11:50:00 by matesant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char dest1[50] = "é isso ai";
	printf("antes: %s\n\n", dest1);
	ft_strcat(dest1, " pe pe pessoal!");
	printf("depois: %s", dest1);
}*/
