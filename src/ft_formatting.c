#include "ft_printf.h"

ft_dt	dispatch_table[] =
{
	{'c', c_TYPE, c_print},
	{'s', s_TYPE, s_print},
	{'p', p_TYPE, p_print},
	{'d', d_TYPE, di_print},
	{'i', i_TYPE, di_print},
	{'o', o_TYPE, o_print},
	{'u', u_TYPE, u_print},
	{'x', x_TYPE, x_print},
	{'X', X_TYPE, X_print},
	{'f', f_TYPE, f_print},
	{'b', b_TYPE, b_print},
	{'e', e_TYPE, eE_print},
	{'E', E_TYPE, eE_print},
	{'g', g_TYPE, g_print},
	{'G', G_TYPE, g_print},
	// {'f', f_TYPE, f_print},
	{0, 0, NULL}
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
	// printf("%c\n", format);
	// printf("%d\n', ft_strchr_idx(SPECIFIER, format));
	// if (format)
	// 	dispatch_table[ft_strchr_idx(SPECIFIER, format)].function(ap, fs);
	while (format && ++i < (int)KIND_OF_SPECIFIER)
	{
		if (format == dispatch_table[i].format)
		{
			// if (ft_strchr("feE", dispatch_table[i].specifier) != NULL)
			// 	fs.for_g = dispatch_table[i].format;
			dispatch_table[i].function(ap, fs);
			break ;
		}
	}
	*s += 1;
}

void	flag_setting(f_s *fs)
{
	fs->plus = 0;
	fs->minus = 0;
	fs->hash = 0;
	fs->space = 0;
	fs->zero = 0;
	fs->width = 0;
	fs->dot = 0;
	fs->prec = 0;
	fs->length = 0;
}

void	get_flag(char c, f_s *fs)
{
	if (c == '+')
		fs->plus = 1;
	else if (c == '-')
		fs->minus = 1;
	else if (c == '#')
		fs->hash = 1;
	else if (c == ' ')
		fs->space = fs->plus ? 0 : 1;
	else if (c == '.')
		fs->dot = 1;
	else if (fs->dot && c >= '0' && c <= '9')
		fs->prec = (fs->prec * 10) + c - '0';
	else if (c >= '1' && c <= '9')
		fs->width = (fs->width * 10) + c - '0';
	else if (c == '0')
	{
		if (fs->width != 0)
			fs->width = (fs->width * 10) + c - '0';
		else
			fs->zero = fs->minus ? 0 : 1;
	}
	//exit(INVALID_TYPE);
}

int		get_length(char **s, f_s *fs)
{
	if (**s == 'h')
	{
		if (fs->length == h_LENGTH)
			return ((fs->length ^ h_LENGTH) | hh_LENGTH);
		else
			return (fs->length | h_LENGTH);
	}
	else if (**s == 'l')
	{
		if (fs->length == l_LENGTH)
			return ((fs->length ^ l_LENGTH) | ll_LENGTH);
		else
			return (fs->length | l_LENGTH);
	}
	else if (**s == 'L')
		return (fs->length | L_LENGTH);
	return (0);
}

int		get_format(char **s, int *flag, f_s *fs)
{
	int i;

	*s += 1;
	i = -1;
	if (**s == '%')
		ft_putchar('%');
	else if (ft_strchr(FLAG_SPECIFIER, **s) != NULL)
	{
		get_flag(**s, fs);
		return get_format(s, flag, fs);
	}
	else if (ft_strchr("hlL", **s) != NULL)
	{
		fs->length = get_length(s, fs);
		return get_format(s, flag, fs);
	}
	else if (ft_strchr(SPECIFIER, **s) != NULL)
		while (++i < (int)KIND_OF_SPECIFIER)
			if (dispatch_table[i].specifier == **s)
			{
				fs->is_upper = ft_strchr("EG", **s) != NULL ? 1 : 0;
				fs->is_g = ft_strchr("gG", **s) != NULL ? 1 : 0;
				return (dispatch_table[i].format | *flag);
			}
	return (0);
}


