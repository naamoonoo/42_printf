#include "ft_printf.h"

ft_ht dispatch_table[KIND_OF_SPECIFIER] =
{
	{"c", c_FLAG, c_print},
	{"s", s_FLAG, s_print},
	{"p", p_FLAG, d_print},
	{"d", d_FLAG, d_print},
	{"i", i_FLAG, i_print},
	{"o", o_FLAG, d_print},
	{"u", u_FLAG, d_print},
	{"x", x_FLAG, d_print},
	{"X", X_FLAG, d_print},
	{"f", f_FLAG, c_print},
	{"h", h_FLAG, d_print},
	{"hh", hh_FLAG, s_print},
	{"l", l_FLAG, c_print},
	{"ll", ll_FLAG, d_print},
	{"L", L_FLAG, s_print},
	{"hd", h_FLAG | d_FLAG, hd_print},
	{"hhd", hh_FLAG | d_FLAG, hhd_print},
	{"ld", l_FLAG | d_FLAG, ld_print},
	{"lld", ll_FLAG | d_FLAG, lld_print},
	{"hi", h_FLAG | i_FLAG, hi_print},
	{"hhi", hh_FLAG | i_FLAG, hhi_print},
	{"li", l_FLAG | i_FLAG, li_print},
	{"lli", ll_FLAG | i_FLAG, lli_print},
	{"hu", h_FLAG | u_FLAG, hu_print},
	{"hhu", hh_FLAG | u_FLAG, hhu_print},
	{"lu", l_FLAG | u_FLAG, lu_print},
	{"llu", ll_FLAG | u_FLAG, llu_print},

	{NULL, 0, NULL}
};

void	ft_formatting(char **s, va_list *ap)
{	
	int		i;
	f_s		fs;
	int		format;

	format = 0;
	i = -1;
	flag_setting(&fs);
	format = get_format(s, &format, &fs);
	while (format && ++i <30)
	{
		if (format == dispatch_table[i].format)
		{
			// printf("%s\n", dispatch_table[i].flag);
			dispatch_table[i].function(ap, fs);
			break ;
		}
	}
	*s += 1;
}


void	get_flag(char c, f_s *fs)
{
	if (c == '+')
		fs->plus += 1;
	else if (c == '-')
		fs->minus += 1;
	else if (c == '#')
		fs->hash += 1;
	else if (c == ' ')
		fs->space += 1;
	else if (c == '.')
		fs->dot += 1;
	else if (fs->dot != 0 && c >= '0' && c <= '9')
		fs->precision = (fs->precision * 10) + c - '0';
	else if (c >= '1' && c <= '9')
		fs->width = (fs->width * 10) + c - '0';
	else if (c == '0')
	{
		if (fs->width != 0)
			fs->width = (fs->width * 10) + c - '0';
		else
			fs->zero += 1;
	}
}

int		get_prefix(char **s, int *flag)
{
	if (**s == 'h')
	{
		if (*flag == h_FLAG)
			return ((*flag ^ h_FLAG) | hh_FLAG);
		else
			return (*flag | h_FLAG);
	}
	else if (**s == 'l')
	{
		if (*flag == l_FLAG)
			return ((*flag ^ l_FLAG) | ll_FLAG);
		else
			return (*flag | l_FLAG);
	}
	else if(**s == 'L')
		return (*flag | L_FLAG);
	return (0);
}

int		get_format(char **s, int *flag, f_s *fs)
{
	int i;

	*s += 1;
	i = -1;
	if (**s == '%')
		ft_putchar('%');
	else if (is_special(**s))
	{
		get_flag(**s, fs);
		return get_format(s, flag, fs);
	}
	else if (is_prefix(**s))
	{
		*flag = get_prefix(s, flag);
		return get_format(s, flag, fs);
	}
	else if (is_specifier(**s))
		while (++i < 10)
			if (dispatch_table[i].specifier[0] == **s)
				return (dispatch_table[i].format | *flag);
	return (0);
}


