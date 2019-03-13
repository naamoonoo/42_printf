#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
#include <stdarg.h>
#include <stdio.h>

typedef struct	format_specifier
{
	int	plus;
	int minus;
	int zero;
	int hash;
	int space;	
	int width;
}				f_s;

// typedef struct	format_char
// {
// 	char 
// };




int		ft_printf(char *s, ...);
void	ft_escape(char *s);

void	ft_formatting(char **s, va_list *ap);
char	get_format_char(char **s, f_s *fs_l);

void	special_char_handle(char c, f_s *fs_l);
void	format_specifier_setting(f_s *fs_l);
int		is_special(char c);
int		is_format(char c);

void	ft_d_print(va_list *ap, f_s fs_l);
void	ft_c_print(va_list *ap, f_s fs_l);
void	ft_s_print(va_list *ap, f_s fs_l);
void	ft_make_width(int len, char c);




#endif