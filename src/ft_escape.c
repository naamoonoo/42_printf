#include "ft_printf.h"

ft_et	escape_sequance[12] =
{
	{'a', '\a'},
	{'b', '\b'},
	{'t', '\t'},
	{'f', '\f'},
	{'r', '\r'},
	{'v', '\v'},
	{'n', '\n'},
	{'\'', '\''},
	{'\"', '\"'},
	{'\\', '\\'},
	{'%', '%'},
	{0, 0},
};

void	ft_escape(char *s)
{
	int i;

	i = -1;
	while (++i < 12)
		if (escape_sequance[i].escape == *s)
			return (ft_putchar(escape_sequance[i].sequance));
}