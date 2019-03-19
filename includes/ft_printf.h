#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
#include <stdarg.h>
#include <stdint.h>

//delete
#include <stdio.h>
//delete

# define SPECIFIER "cspdiouxXf"
# define KIND_OF_SPECIFIER (ft_strlen(SPECIFIER))

# define BINARY 2
# define OCTAL 8
# define HEXA 16



typedef struct	flag_specifier
{
	int			plus; // show  + or -
	int 		minus; // left_aligned
	int 		zero; // not space but 0
	int 		hash; // not space but #
	int 		space; //just space
	int 		width; //make space - strlen() - f_s.plus - f_s.space
	int 		dot;
	int 		prec;
	int 		length;
	char		*color;
}				f_s;

typedef enum {
	c_TYPE = 1 << 0,
	s_TYPE = 1 << 1,
	p_TYPE = 1 << 2,
	d_TYPE = 1 << 3,
	i_TYPE = 1 << 4,
	o_TYPE = 1 << 5,
	u_TYPE = 1 << 6,
	x_TYPE = 1 << 7,
	X_TYPE = 1 << 8,
	f_TYPE = 1 << 9,
}				type_specifier;

typedef enum {
	h_LENGTH = 1 << 10,
	hh_LENGTH = 1 << 11,
	l_LENGTH = 1 << 12,
	ll_LENGTH = 1 << 13,
	L_LENGTH = 1 << 14,
}				length_specifier;

typedef struct	ft_dispatch_table
{
	char		*specifier;
	int			format;
	void		(*function)();
}				ft_ht;



// typedef struct	format_char
// {
// 	char 
// };

//libft
void			ft_make_width(int len, char c);
int				is_signed(int is_minus, f_s fs);
void			sign_handler(int is_minus, f_s fs);
void			ft_putnbr_width(int64_t n, int len, f_s fs);
void			ft_put_decimal(long double n, f_s fs);
int				decimal_len(long double n);

void			ft_formatting(char **s, va_list *ap);
void			flag_setting(f_s *fs);
int				get_length(char **s, f_s *fs);
int				get_format(char **s, int *flag, f_s *fs);
void			get_flag(char c, f_s *fs);

int				ft_printf(char *s, ...);

int64_t			get_number(va_list *ap, f_s fs);
void			di_print(va_list *ap, f_s fs);

uint64_t		get_unsigned_number(va_list *ap, f_s fs);
void			u_print(va_list *ap, f_s fs);

void			o_print(va_list *ap, f_s fs);
void			x_print(va_list *ap, f_s fs);
void			X_print(va_list *ap, f_s fs);
void			b_print(va_list *ap, f_s fs);

long double		get_float_number(va_list *ap, f_s fs);
void			f_print(va_list *ap, f_s fs);

void			c_print(va_list *ap, f_s fs);
void			s_print(va_list *ap, f_s fs);
void			p_print(va_list *ap, f_s fs);






#endif



// union						u_type
// {
// 	int						di;
// 	short int				hdi;
// 	signed char				hhdi;
// 	long int				ldi;
// 	long long int			lldi;
// 	intmax_t				jdi;
// 	unsigned int			uox;
// 	unsigned short int		huox;
// 	unsigned char			hhuox;
// 	unsigned long int		luox;
// 	unsigned long long int	lluox;
// 	uintmax_t				juox;
// 	size_t					zdiuox;
// 	unsigned char			c;
// 	wchar_t					lc;
// 	char					*s;
// 	wchar_t					*ls;
// 	unsigned long long int	p;
// }							;
