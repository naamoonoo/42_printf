#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
#include <stdarg.h>
#include <stdio.h>

# define FLAG_NUMBER 10
# define KIND_OF_SPECIFIER 256

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

typedef enum {
	c_FLAG = 1 << 0,
	s_FLAG = 1 << 1,
	p_FLAG = 1 << 2,
	d_FLAG = 1 << 3,
	i_FLAG = 1 << 4,
	o_FLAG = 1 << 5,
	u_FLAG = 1 << 6,
	x_FLAG = 1 << 7,
	X_FLAG = 1 << 8,
	f_FLAG = 1 << 9,
	h_FLAG = 1 << 10,
	hh_FLAG = 1 << 11,
	l_FLAG = 1 << 12,
	ll_FLAG = 1 << 13,
	L_FLAG = 1 << 14,
}				flag_specifier;

typedef struct	ft_hash_table
{
	char	*specifier;
	int		format;
	void	(*function)();
}				ft_ht;

typedef struct	ft_escape_table
{
	char	escape;
	char	sequance;
}				ft_et;


// typedef struct	format_char
// {
// 	char 
// };

int		is_special(char c);
int		is_specifier(char c);
int		is_prefix(char c);

void	ft_formatting(char **s, va_list *ap);
void	flag_setting(f_s *fs);
int		get_prefix(char **s, int *flag);
int		get_format(char **s, int *flag, f_s *fs);
void	get_flag(char c, f_s *fs);

int		ft_printf(char *s, ...);

void	ft_escape(char *s);


void	d_print(va_list *ap, f_s fs);
void	hd_print(va_list *ap, f_s fs);
void	hhd_print(va_list *ap, f_s fs);
void	ld_print(va_list *ap, f_s fs);
void	lld_print(va_list *ap, f_s fs);

void	i_print(va_list *ap, f_s fs);
void	hi_print(va_list *ap, f_s fs);
void	hhi_print(va_list *ap, f_s fs);
void	li_print(va_list *ap, f_s fs);
void	lli_print(va_list *ap, f_s fs);

void	u_print(va_list *ap, f_s fs);
void	hu_print(va_list *ap, f_s fs);
void	hhu_print(va_list *ap, f_s fs);
void	lu_print(va_list *ap, f_s fs);
void	llu_print(va_list *ap, f_s fs);

void	f_print(va_list *ap, f_s fs);
void	c_print(va_list *ap, f_s fs);
void	s_print(va_list *ap, f_s fs);
void	ft_make_width(int len, char c);





#endif

