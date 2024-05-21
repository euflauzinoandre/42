/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:49:05 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/21 01:44:12 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *arguments, ...);
int	output_data(const char *params, int i, int num_args, va_list args);
int	print_d(int n, int fd);

#endif // FT_PRINTF_H