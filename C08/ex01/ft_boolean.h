/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:26:15 by omaly             #+#    #+#             */
/*   Updated: 2025/02/25 20:04:02 by omaly            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOLEAN__H__
# define BOOLEAN__H__
int		TRUE = 1;
int		FALSE = 0;
int	EVEN(int nbr)
{
	return (nbr % 2);
}
char	*EVEN_MSG = "I have an even number of arguments.";
char	*ODD_MSG = "I have an odd number of arguments.";
int		SUCCESS = 0;

#endif
