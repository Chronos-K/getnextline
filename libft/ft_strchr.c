/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uroy <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:19:57 by uroy              #+#    #+#             */
/*   Updated: 2018/11/08 16:05:14 by uroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (c == '\0')
	{
		while (s[i])
			i++;
		return (char*)&s[i];
	}
	if (s[i] == '\0')
		return (0);
	while (s[i] != c && s[i])
		i++;
	if (s[i] == '\0')
		return (0);
	return (char*)&s[i];
}
