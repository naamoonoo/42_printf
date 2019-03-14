#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
#include <stdarg.h>
#include <stdio.h>

typedef struct	format_specifier
{
	int	plus; // show  + or -
	int minus; // left_aligned
	int zero; // not space but 0
	int hash; // not space but #
	int space; //just space
	int width; //make space - strlen() - f_s.plus - f_s.space
	int dot;
	int precision;
}				f_s;

// typedef struct	format_char
// {
// 	char 
// };

void	ft_putfloat(long double n);


int		ft_printf(char *s, ...);
void	ft_escape(char *s);

void	ft_formatting(char **s, va_list *ap);
char	get_format(char **s, f_s *fs_l);

void	format_specifier_handle(char c, f_s *fs_l);
void	format_specifier_setting(f_s *fs_l);
int		is_special(char c);
int		is_format(char c);

void	ft_d_print(va_list *ap, f_s fs_l);
void	ft_f_print(va_list *ap, f_s fs_l);
void	ft_c_print(va_list *ap, f_s fs_l);
void	ft_s_print(va_list *ap, f_s fs_l);
void	ft_make_width(int len, char c);




#endif