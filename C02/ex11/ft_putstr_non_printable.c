	/* ************************************************************************** */
	/*                                                                            */
	/*                                                        :::      ::::::::   */
	/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
	/*                                                    +:+ +:+         +:+     */
	/*   By: omaly <omaly@student.42.fr>                +#+  +:+       +#+        */
	/*                                                +#+#+#+#+#+   +#+           */
	/*   Created: 2025/02/13 13:09:35 by omaly             #+#    #+#             */
	/*   Updated: 2025/02/13 15:37:34 by omaly            ###   ########.fr       */
	/*                                                                            */
	/* ************************************************************************** */

	#include <stdio.h>
	#include <unistd.h>

	int is_backslash(char str) {
		if(str == 92)
			return 1;
		return 0;
	}

	void	write_buff(char *buff)
	{
		int	i;

		i = 1;
		while (i >= 0)
			write(1, &buff[i--], 1);
	}

	void	dec_to_hex(int num)
	{
		char	buffer[2];
		int		i;
		int		rem;

		i = 0;
		while (num > 0)
		{
			rem = num % 16;
			num /= 16;
			if (rem < 10)
				buffer[i++] = rem + '0';
			else if (rem >= 10)
				buffer[i++] = rem + 87;
			if (rem < 16)
				write(1, "0", 1);
		}
		write_buff(buffer);
	}

	int	char_is_nonprint(char str)
	{
		if (!(32 <= str && str <= 126))
			return (1);
		return (0);
	}

	void	ft_putstr_non_printable(char *str)
	{
		int	i;

		i = 0;
		while (str[i] != '\0')
		{
			if (is_backslash(str[i]) == 1)
				write(1,"\\",1);
			if (char_is_nonprint(str[i]) == 1)
				dec_to_hex(str[i]);
			write(1, &str[i], 1);
			i++;
		}
	}

	int	main(void)
	{
		char	str[] = "Coucou\ntu vas bien ?";

		ft_putstr_non_printable(str);
		dec_to_hex(31);
		return (0);
	}
