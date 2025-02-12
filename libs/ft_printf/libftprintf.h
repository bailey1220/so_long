/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bailey <bailey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 16:42:21 by bailey            #+#    #+#             */
/*   Updated: 2025/02/12 16:42:22 by bailey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	print_char(char c);
int	print_string(char *s);
int	print_pointer(uintptr_t p);
int	print_number(int n);
int	print_unsigned_number(unsigned int n);
int	print_hex(unsigned int n, int c);

#endif