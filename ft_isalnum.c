/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samatsum  <samatsum@student.42tokyo.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:36:09 by samatsum          #+#    #+#             */
/*   Updated: 2023/05/16 20:47:38 by samatsum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	else if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}