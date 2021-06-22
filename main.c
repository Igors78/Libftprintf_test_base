/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarut <mbarut@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 13:41:37 by ioleinik          #+#    #+#             */
/*   Updated: 2021/06/23 00:38:52 by mbarut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

#define BLACK "\033[0;30m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define CYAN "\033[0;36m"
#define WHITE "\033[0;37m"
#define DEFAULT "\033[0m"

int	main(void)
{
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	char	*nu = NULL;
	int		x;
	int		y;
	static char     			a01;
	static unsigned char 		a02;
	static short 				a03;
	static unsigned short 		a04;
	static int 					a05;
	static unsigned int 		a06;
	static long 				a07;
	static unsigned long 		a08;
	static long long 			a09;
	static unsigned long long 	a10;
	static char 				*a11;
	static void 				*a12;

	x = 0;
	y = 0;
	
	printf(CYAN"|001|"); printf(DEFAULT"\n");
	x = ft_printf("test\n");
	y = printf("test\n");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|002|"); printf(DEFAULT"\n");
	x = ft_printf("%i, %d, %d, %d, %d, %d, %i, %d, %i, %d\n", a, b, c, d, e, f, g, h, i, j);
	y = printf("%i, %d, %d, %d, %d, %d, %i, %d, %i, %d\n", a, b, c, d, e, f, g, h, i, j);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|003|"); printf(DEFAULT"\n");
	x = ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", m, l, k, i, j, a, b, c);
	y = printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", m, l, k, i, j, a, b, c);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|004|"); printf(DEFAULT"\n");
	x = ft_printf("%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d);
	y = printf("%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|005|"); printf(DEFAULT"\n");
	x = ft_printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d);
	y = printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|006|"); printf(DEFAULT"\n");
	x = ft_printf("%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d);
	y = printf("%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|007|"); printf(DEFAULT"\n");
	x = ft_printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d);
	y = printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|008|"); printf(DEFAULT"\n");
	x = ft_printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d);
	y = printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|009|"); printf(DEFAULT"\n");
	x = ft_printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d);
	y = printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|010|"); printf(DEFAULT"\n");
	x = ft_printf("%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	y = printf("%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|011|"); printf(DEFAULT"\n");
	x = ft_printf("%0*i, %0*d, %0*d, %0*d\n", a, i, a, j, a, l, a, c);
	y = printf("%0*i, %0*d, %0*d, %0*d\n", a, i, a, j, a, l, a, c);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|012|"); printf(DEFAULT"\n");
	x = ft_printf("%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	y = printf("%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|013|"); printf(DEFAULT"\n");
	x = ft_printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	y = printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|014|"); printf(DEFAULT"\n");
	x = ft_printf("%*s, %*s, %*s, %*s\n", a, o, a, p, a, q, a, r);
	y = printf("%*s, %*s, %*s, %*s\n", a, o, a, p, a, q, a, r);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|015|"); printf(DEFAULT"\n");
	x = ft_printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	y = printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|016|"); printf(DEFAULT"\n");
	x = ft_printf("%.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	y = printf("%.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|017|"); printf(DEFAULT"\n");
	x = ft_printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r);
	y = printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|018|"); printf(DEFAULT"\n");
	x = ft_printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r);
	y = printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|019|"); printf(DEFAULT"\n");
	x = ft_printf("%.2s, %.2s, %.2s, %.2s, %.2s\n", n, o, p, q, r);
	y = printf("%.2s, %.2s, %.2s, %.2s, %.2s\n", n, o, p, q, r);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|020|"); printf(DEFAULT"\n");
	x = ft_printf("%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	y = printf("%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|021|"); printf(DEFAULT"\n");
	x = ft_printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	y = printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|022|"); printf(DEFAULT"\n");
	x = ft_printf("%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, \n%X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e);
	y = printf("%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, \n%X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|023|"); printf(DEFAULT"\n");
	x = ft_printf("%*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	y = printf("%*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|024|"); printf(DEFAULT"\n");
	x = ft_printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	y = printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|025|"); printf(DEFAULT"\n");
	x = ft_printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	y = printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|026|"); printf(DEFAULT"\n");
	x = ft_printf("%-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	y = printf("%-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|027|"); printf(DEFAULT"\n");
	x = ft_printf("%.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	y = printf("%.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|028|"); printf(DEFAULT"\n");
	x = ft_printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	y = printf("%*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X, %*.*u, %*.*x, %*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|029|"); printf(DEFAULT"\n");
	x = ft_printf("%*.*u, %*.*x, %*.*X\n", a, b, e, a, b, e, a, b, e);
	y = printf("%*.*u, %*.*x, %*.*X\n", a, b, e, a, b, e, a, b, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|030|"); printf(DEFAULT"\n");
	x = ft_printf("%12.12i, %12.12d\n", -42, 42);
	y = printf("%12.12i, %12.12d\n", -42, 42);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|031|"); printf(DEFAULT"\n");
	x = ft_printf("%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	y = printf("%-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X, %-*.*u, %-*.*x, %-*.*X\n", a, b, i, a, b, i, a, b, i, a, b, j, a, b, j, a, b, j, a, b, k, a, b, k, a, b, k, a, b, l, a, b, l, a, b, l, a, b, m, a, b, m, a, b, m, a, b, c, a, b, c, a, b, c, a, b, d, a, b, d, a, b, d, a, b, e, a, b, e, a, b, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|032|"); printf(DEFAULT"\n");
	x = ft_printf("%p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0);
	y = printf("%p, %x, %p, %x, %p, %x, %p, %x\n", (void *)209590960, 209590960, (void *)207038912, 207038912, (void *)1, 1, NULL, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|033|"); printf(DEFAULT"\n");
	x = ft_printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x|\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
	y = printf("%*p, %*x, %*p, %*x, %*p, %*x, %*p, %*x|\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|034|"); printf(DEFAULT"\n");
	x = ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
	y = printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|035|"); printf(DEFAULT"\n");
	x = ft_printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c);
	y = printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|036|"); printf(DEFAULT"\n");
	x = ft_printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	y = printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|037|"); printf(DEFAULT"\n");
	x = ft_printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
	y = printf("%-*p, %-*x, %-*p, %-*x, %-*p, %-*x, %-*p, %-*x\n", a, (void *)209590960, a, 209590960, a, (void *)207038912, a, 207038912, a, (void *)1, a, 1, a, NULL, a, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|037|"); printf(DEFAULT"\n");
	x = ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], a, p[0], a, q[0], a, r[0], a, c);
	y = printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], a, p[0], a, q[0], a, r[0], a, c);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|039|"); printf(DEFAULT"\n");
	x = ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], -a, p[0], -a, q[0], -a, r[0], -a, c);
	y = printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], o[0], -a, p[0], -a, q[0], -a, r[0], -a, c);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|040|"); printf(DEFAULT"\n");
	x = ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], q[0], a, q[0], a, p[0], a, p[0], a, c);
	y = printf("%c,  %-c, %1c, %*c,  %-*c,  %*c, %-*c\n", c, n[0], q[0], a, q[0], a, p[0], a, p[0], a, c);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|041|"); printf(DEFAULT"\n");
	x = ft_printf("%c,  %-c, %1c, %*c,  %-*c,  %*c\n", -12, -1, -255, a, -12, a, -1, a, -255);
	y = printf("%c,  %-c, %1c, %*c,  %-*c,  %*c\n", -12, -1, -255, a, -12, a, -1, a, -255);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|042|"); printf(DEFAULT"\n");
	x = ft_printf("%%, \t, \\, \", \', +\n");
	y = printf("%%, \t, \\, \", \', +\n");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|043|"); printf(DEFAULT"\n");
	x = ft_printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p);
	y = printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|044|"); printf(DEFAULT"\n");
	x = ft_printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p);
	y = printf("%%%dbada%s%%**%s**-d%%0*d%-12s0*@\n", h, "bada", r, p);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|045|"); printf(DEFAULT"\n");
	x = ft_printf("%i, %d, %d, %d, %d, %d, %u, %x, %X\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	y = printf("%i, %d, %d, %d, %d, %d, %u, %x, %X\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|046|"); printf(DEFAULT"\n");
	x = ft_printf("%*i, %*d, %*d, %*d, %*d, %*d, %*u, %*x, %*X\n", a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0);
	y = printf("%*i, %*d, %*d, %*d, %*d, %*d, %*u, %*x, %*X\n", a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0, a, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|047|"); printf(DEFAULT"\n");
	x = ft_printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0);
	y = printf("%c, %-c, %12c, %-3c, %-1c, %1c, %-2c, %-4c, %5c, %3c, %-*c, %-*c, %*c, %*c\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|048|"); printf(DEFAULT"\n");
	x = ft_printf("%p %p %p %p\n", n, o, p, q);
	y = printf("%p %p %p %p\n", n, o, p, q);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|049|"); printf(DEFAULT"\n");
	x = ft_printf("%p %p %p %p\n", r, s, t, u);
	y = printf("%p %p %p %p\n", r, s, t, u);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|050|"); printf(DEFAULT"\n");
	x = ft_printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	y = printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|051|"); printf(DEFAULT"\n");
	x = ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
	y = printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|052|"); printf(DEFAULT"\n");
	x = ft_printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
	y = printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|053|"); printf(DEFAULT"\n");
	x = ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42);
	y = printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|054|"); printf(DEFAULT"\n");
	x = ft_printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r);
	y = printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|055|"); printf(DEFAULT"\n");
	x = ft_printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r);
	y = printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|056|"); printf(DEFAULT"\n");
	x = ft_printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r);
	y = printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|057|"); printf(DEFAULT"\n");
	x = ft_printf("%7.5s\n", "bombastic");
	y = printf("%7.5s\n", "bombastic");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|058|"); printf(DEFAULT"\n");
	x = ft_printf("%-7.5s\n", "tubular");
	y = printf("%-7.5s\n", "tubular");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|059|"); printf(DEFAULT"\n");
	x = ft_printf("%7.3s%7.7s\n", "hello", "world");
	y = printf("%7.3s%7.7s\n", "hello", "world");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|060|"); printf(DEFAULT"\n");
	x = ft_printf("%7.3s%3.7s\n", "hello", "world");
	y = printf("%7.3s%3.7s\n", "hello", "world");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|061|"); printf(DEFAULT"\n");
	x = ft_printf("%7.7s%7.3s\n", "hello", "world");
	y = printf("%7.7s%7.3s\n", "hello", "world");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|062|"); printf(DEFAULT"\n");
	x = ft_printf("%3.7s%7.3s\n", "hello", "world");
	y = printf("%3.7s%7.3s\n", "hello", "world");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|063|"); printf(DEFAULT"\n");
	x = ft_printf("%7.3s%7.3s\n", "hello", "world");
	y = printf("%7.3s%7.3s\n", "hello", "world");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|064|"); printf(DEFAULT"\n");
	x = ft_printf("%3.3s%7.3s\n", "hello", "world");
	y = printf("%3.3s%7.3s\n", "hello", "world");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|065|"); printf(DEFAULT"\n");
	x = ft_printf("%7.3s%3.3s\n", "hello", "world");
	y = printf("%7.3s%3.3s\n", "hello", "world");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|066|"); printf(DEFAULT"\n");
	x = ft_printf("%.5s|%7s|\n", "yo", "boi");
	y = printf("%.5s|%7s|\n", "yo", "boi");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|067|"); printf(DEFAULT"\n");
	x = ft_printf("%7.5s\n", "yolo");
	y = printf("%7.5s\n", "yolo");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|068|"); printf(DEFAULT"\n");
	x = ft_printf("%8.5i\n", 34);
	y = printf("%8.5i\n", 34);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|069|"); printf(DEFAULT"\n");
	x = ft_printf("%10.5i\n", -216);
	y = printf("%10.5i\n", -216);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|070|"); printf(DEFAULT"\n");
	x = ft_printf("%8.3i\n", 8375);
	y = printf("%8.3i\n", 8375);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|071|"); printf(DEFAULT"\n");
	x = ft_printf("%8.3i\n", -8375);
	y = printf("%8.3i\n", -8375);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|072|"); printf(DEFAULT"\n");
	x = ft_printf("%.4i\n", -2372);
	y = printf("%.4i\n", -2372);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|073|"); printf(DEFAULT"\n");
	x = ft_printf("%08.5i\n", 34);
	y = printf("%08.5i\n", 34);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|074|"); printf(DEFAULT"\n");
	x = ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	y = printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|075|"); printf(DEFAULT"\n");
	x = ft_printf("%.5d\n", -2372);
	y = printf("%.5d\n", -2372);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|076|"); printf(DEFAULT"\n");
	x = ft_printf("{%05.*d}\n", -15, 42);
	y = printf("{%05.*d}\n", -15, 42);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|077|"); printf(DEFAULT"\n");
	x = ft_printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d);
	y = printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|078|"); printf(DEFAULT"\n");
	x = ft_printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d);
	y = printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|079|"); printf(DEFAULT"\n");
	x = ft_printf("%20.5d\n", -1024);
	y = printf("%20.5d\n", -1024);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|080|"); printf(DEFAULT"\n");
	x = ft_printf("%8.3i\n", -8473);
	y = printf("%8.3i\n", -8473);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|081|"); printf(DEFAULT"\n");
	x = ft_printf("%p\n", NULL);
	y = printf("%p\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|082|"); printf(DEFAULT"\n");
	x = ft_printf("%15p\n", NULL);
	y = printf("%15p\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|083|"); printf(DEFAULT"\n");
	x = ft_printf("%16.*s\n", -64, "");
	y = printf("%16.*s\n", -64, "");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|084|"); printf(DEFAULT"\n");
	x = ft_printf("%0*.*d\n", 1, 0, 0);
	y = printf("%0*.*d\n", 1, 0, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|085|"); printf(DEFAULT"\n");
	x = ft_printf("%0*d\n", 1, 0);
	y = printf("%0*d\n", 1, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|086|"); printf(DEFAULT"\n");
	x = ft_printf("%0*.*d|%0*.*d|\n", 2, 0, 8, 2, 0, 0);
	y = printf("%0*.*d|%0*.*d|\n", 2, 0, 8, 2, 0, 0);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|087|"); printf(DEFAULT"\n");
	x = ft_printf("%0*.*d\n", 4, 0, -12);
	y = printf("%0*.*d\n", 4, 0, -12);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|088|"); printf(DEFAULT"\n");
	x = ft_printf("%s\n", NULL);
	y = printf("%s\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|089|"); printf(DEFAULT"\n");
	x = ft_printf("%.03s\n", NULL);
	y = printf("%.03s\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|090|"); printf(DEFAULT"\n");
	x = ft_printf("%.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", -2, NULL, NULL, NULL, NULL, NULL, NULL);
	y = printf("%.*s, %.0s, %.1s, %.2s, %.4s, %.8s\n", -2, NULL, NULL, NULL, NULL, NULL, NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|091|"); printf(DEFAULT"\n");
	x = ft_printf("%*.*s|\n", -2, 3, "abcdef");
	y = printf("%*.*s|\n", -2, 3, "abcdef");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|092|"); printf(DEFAULT"\n");
	x = ft_printf("%-2.4s|\n", NULL);
	y = printf("%-2.4s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|093|"); printf(DEFAULT"\n");
	x = ft_printf("%.03s|\n", NULL);
	y = printf("%.03s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|094|"); printf(DEFAULT"\n");
	x = ft_printf("%.4s|\n", NULL);
	y = printf("%.4s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|095|"); printf(DEFAULT"\n");
	x = ft_printf("%.2s|\n", NULL);
	y = printf("%.2s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|096|"); printf(DEFAULT"\n");
	x = ft_printf("%.s|\n", NULL);
	y = printf("%.s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|097|"); printf(DEFAULT"\n");
	x = ft_printf("%-4s|\n", NULL);
	y = printf("%-4s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|098|"); printf(DEFAULT"\n");
	x = ft_printf("%.03s|\n", NULL);
	y = printf("%.03s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|099|"); printf(DEFAULT"\n");
	x = ft_printf("%-8.12s|\n", NULL);
	y = printf("%-8.12s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|100|"); printf(DEFAULT"\n");
	x = ft_printf("%8s|\n", NULL);
	y = printf("%8s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|101|"); printf(DEFAULT"\n");
	x = ft_printf("%8s|\n", NULL);
	y = printf("%8s|\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|102|"); printf(DEFAULT"\n");
	x = ft_printf(nu, NULL);
	y = printf(nu, NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|103|"); printf(DEFAULT"\n");
	x = ft_printf("%x\n", -1);
	y = printf("%x\n", -1);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|104|"); printf(DEFAULT"\n");
	x = ft_printf("Hello 42 school! %s\n", NULL);
	y = printf("Hello 42 school! %s\n", NULL);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|105|"); printf(DEFAULT"\n");
	x = ft_printf("[% %]\n");
	y = printf("[% %]\n");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|106|"); printf(DEFAULT"\n");
	x = ft_printf("[%  %]\n");
	y = printf("[%  %]\n");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|107|"); printf(DEFAULT"\n");
	x = ft_printf("[%   %]\n");
	y = printf("[%   %]\n");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|108|"); printf(DEFAULT"\n");
	x = ft_printf("[%%]\n");
	y = printf("[%%]\n");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|109|"); printf(DEFAULT"\n");
	x = ft_printf("%10.5s\n", "Hello 42 Student");
	y = printf("%10.5s\n", "Hello 42 Student");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|110|"); printf(DEFAULT"\n");
	x = ft_printf("");
	y = printf("");
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");
	
	printf(CYAN"|111|"); printf(DEFAULT"\n");
	x = ft_printf("%%---%---.0dbada%.0s%%*-*%s**-.d%%0*d%-12.s0*@\n", h, "bada", r, p);
	y = printf("%%---%---.0dbada%.0s%%*-*%s**-.d%%0*d%-12.s0*@\n", h, "bada", r, p);
	(x == y) ? (printf(GREEN"OK\n")) : (printf(RED"KO\n")); printf(YELLOW"usr - %d | org - %d\n", x, y); printf(DEFAULT"\n");

	return (0);
}
