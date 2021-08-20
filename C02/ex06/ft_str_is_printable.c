/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-nu <vlima-nu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 01:23:00 by vlima-nu          #+#    #+#             */
/*   Updated: 2021/04/09 01:33:16 by vlima-nu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str > 31 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}