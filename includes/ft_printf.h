#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdint.h>
# include <time.h>
//delete
#include <stdio.h>
//delete

# define ERROR -42

# define FLAG_SPECIFIER "-+ 0#.123456789$*"
# define LENGTH_SPECIFIER "hlL"
# define SPECIFIER "cspdiouxXfbeEgG%k"
# define KIND_OF_SPECIFIER (ft_strlen(SPECIFIER))

# define BINARY 2
# define OCTAL 8
# define HEXA 16

// typedef enum {
// 	c_TYPE = 1 << 0,
// 	s_TYPE = 1 << 1,
// 	p_TYPE = 1 << 2,
// 	d_TYPE = 1 << 3,
// 	i_TYPE = 1 << 4,
// 	o_TYPE = 1 << 5,
// 	u_TYPE = 1 << 6,
// 	x_TYPE = 1 << 7,
// 	X_TYPE = 1 << 8,
// 	f_TYPE = 1 << 9,
// 	b_TYPE = 1 << 10,
// 	e_TYPE = 1 << 11,
// 	E_TYPE = 1 << 12,
// 	g_TYPE = 1 << 13,
// 	G_TYPE = 1 << 14,
// }				type_specifier;

enum			e_length
{
	h_LENGTH = 1 << 0,
	hh_LENGTH = 1 << 1,
	l_LENGTH = 1 << 2,
	ll_LENGTH = 1 << 3,
	L_LENGTH = 1 << 4,
	j_LENGTH = 1 << 5,
	z_LENGTH = 1 << 6,
};

// typedef struct		s_list
// {
// 	t_type			val;
// 	struct s_list	*next;
// }					t_list;

typedef struct	s_dispatch_table
{
	char		specifier;
	int			(*function)();
}				t_dt;

typedef struct	s_flag_specifier
{
	int			plus; // show  + or -
	int 		minus; // left_aligned
	int 		zero; // not space but 0
	int 		hash; // not space but #
	int 		space; //just space
	int 		width; //make space - strlen() - f_s.plus - f_s.space
	int			w_star;
	int			p_star;
	int 		dot;
	int			apo;
	int 		prec;
	int			length;
	int			is_upper;
	int			is_g;
}				t_s;

typedef struct	s_color_table
{
	char		*color;
	char		*code;
}				t_table;

int				ft_printf(char *s, ...);

void			ft_formatting(char **s, va_list *ap, int *res);
void			flag_setting(t_s *fs);
int				get_length(char **s, t_s *fs);
int				get_format(char **s, int *flag, t_s *fs);
void			get_flag(char c, t_s *fs);

int				c_print(va_list *ap, t_s fs);
int				s_print(va_list *ap, t_s fs);
int				p_print(va_list *ap, t_s fs);
int				pct_print(t_s fs);
int				time_print(t_s fs);
int64_t			get_number(va_list *ap, t_s fs);
int				di_print(va_list *ap, t_s fs);

uint64_t		get_unsigned_number(va_list *ap, t_s fs);
int				u_print(va_list *ap, t_s fs);

int				o_print(va_list *ap, t_s fs);
int				x_print(va_list *ap, t_s fs);
int				b_print(va_list *ap, t_s fs);

long double		get_float_number(va_list *ap, t_s fs);
int				f_print(va_list *ap, t_s fs);
int				ee_print(va_list *ap, t_s fs);
int				g_print(va_list *ap, t_s fs);

int				is_sign(int is_minus, t_s fs);
void			sign_handler(int is_minus, t_s fs);
void			ft_putnbr_width(int64_t n, int minimum_len, t_s fs);
void			ft_putnbr_width_u(int64_t n, int minimum_len, t_s fs);
void			ft_put_float(long double n, t_s fs);
void			ft_put_expo(int e_num, t_s fs);

void			ft_make_width(int len, char c);
void			ft_putstr_upper(char *s);
int				get_enum(long double f);

void			ft_coloring(char **s, int *res);

void		 	ftoa(float f, char *str, uint8_t precision);

void			star_handler(va_list *ap, t_s *fs);
int				get_res_len(char *s);

#endif



// typedef union				u_type
// {
// 	int						di;
// 	short int				hdi;
// 	signed char				hhdi;
// 	long int				ldi;
// 	long long int			lldi;
// 	intmax_t				jdi;
// 	unsigned int			uoxab;
// 	unsigned short int		huoxab;
// 	unsigned char			hhuoxab;
// 	unsigned long int		luoxab;
// 	unsigned long long int	lluoxab;
// 	uintmax_t				juox;
// 	size_t					zdiuox;
// 	unsigned char			c;
// 	wchar_t					lc;
// 	char					*s;
// 	unsigned long long int	p;
// 	float					f;
// 	double					lf;
// 	long double				llf;
// }							t_type;
	// wchar_t					*ls;
