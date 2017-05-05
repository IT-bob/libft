# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguerin <aguerin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/04 10:07:37 by aguerin           #+#    #+#              #
#    Updated: 2017/05/05 16:59:22 by aguerin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CPPFLAGS = -Iincludes

# Sous-dossiers où sont placés les fichiers
SRC = src/
CHAR = $(SRC)char/
CONV = $(SRC)conversion/
IS = $(SRC)is/
LST = $(SRC)list/
MATH = $(SRC)math/
MEM = $(SRC)memory/
PUT = $(SRC)print/
STRING = $(SRC)string/
TAB = $(SRC)tab/
CHR = $(PUT)char/
STR = $(PUT)str/
NBR = $(PUT)nbr/

# Sous-dossiers pour ft_printf
PRINTF = $(SRC)ft_printf/
PCONV = $(PRINTF)conversions/

# Liste des fichiers sources
PTC =\
$(CHAR)ft_charwbytlen.c $(CHAR)ft_tolower.c $(CHAR)ft_toupper.c\
$(CONV)ft_atoi.c $(CONV)ft_atoi_base.c $(CONV)ft_itoa.c $(CONV)ft_itoa_base.c $(CONV)ft_itoa_long.c\
$(IS)ft_isalnum.c $(IS)ft_isalpha.c $(IS)ft_isascii.c $(IS)ft_isdigit.c $(IS)ft_islowercase.c $(IS)ft_isprint.c $(IS)ft_isspace.c $(IS)ft_isuppercase.c $(IS)ft_is_valid_char.c\
$(LST)ft_lstadd.c $(LST)ft_lstaddapha.c $(LST)ft_lstaddend.c $(LST)ft_lstaddnew.c $(LST)ft_lstdel.c $(LST)ft_lstdelall.c $(LST)ft_lstdelone.c $(LST)ft_lstdelonejoin.c $(LST)ft_lstiter_reverse.c $(LST)ft_lstiter.c $(LST)ft_lstmap.c $(LST)ft_lstnew.c\
$(MATH)ft_factorial.c $(MATH)ft_pow.c $(MATH)ft_sqrt.c\
$(MEM)ft_bzero.c $(MEM)ft_memalloc.c $(MEM)ft_memccpy.c $(MEM)ft_memchr.c $(MEM)ft_memcmp.c $(MEM)ft_memcpy.c $(MEM)ft_memdel.c $(MEM)ft_memmove.c $(MEM)ft_memset.c $(MEM)ft_strdel.c $(MEM)ft_strfreejoin.c $(MEM)ft_striter.c $(MEM)ft_striteri.c $(MEM)ft_strnew.c\
$(CHR)ft_putchar.c $(CHR)ft_putchar_fd.c $(CHR)ft_putcharl.c $(CHR)ft_putchars.c $(STR)ft_putendl.c $(STR)ft_putendl_fd.c $(NBR)ft_putnbr.c $(NBR)ft_putnbr_fd.c $(NBR)ft_putnbr_long.c $(NBR)ft_putnbrl.c $(NBR)ft_putnbrs.c $(CHR)ft_putnchar.c $(STR)ft_putstr.c $(STR)ft_putstrlower.c $(STR)ft_putstr_fd.c $(STR)ft_putstrs.c $(STR)ft_putstrupper.c $(CHR)ft_putwchar.c $(CHR)ft_putwcharl.c $(CHR)ft_putwchars.c $(STR)ft_putwendl.c $(CHR)ft_putwnchar.c $(STR)ft_putwstr.c $(STR)ft_putwstrs.c $(CHR)ft_putxchar.c $(CHR)ft_putxwchar.c $(CHR)ft_putcharl_fd.c\
$(SRC)ft_swap.c $(SRC)get_next_line.c\
$(STRING)ft_strwbytlen.c $(STRING)ft_count_word.c $(STRING)ft_strcat.c $(STRING)ft_strchr.c $(STRING)ft_strclr.c $(STRING)ft_strcmp.c $(STRING)ft_strcpy.c $(STRING)ft_strdup.c $(STRING)ft_strequ.c $(STRING)ft_strjoin.c $(STRING)ft_strlcat.c $(STRING)ft_strlen.c $(STRING)ft_strmap.c $(STRING)ft_strmapi.c $(STRING)ft_strncat.c $(STRING)ft_strncmp.c $(STRING)ft_strncpy.c $(STRING)ft_strnequ.c $(STRING)ft_strnstr.c $(STRING)ft_strrchr.c $(STRING)ft_strsplit.c $(STRING)ft_strstr.c $(STRING)ft_strsub.c $(STRING)ft_strtolower.c $(STRING)ft_strtoupper.c $(STRING)ft_strtrim.c $(STRING)ft_strwlen.c\
$(TAB)fill_tab.c\
\
$(PRINTF)ft_printf.c $(PRINTF)conversion.c $(PRINTF)corrections.c $(PRINTF)find.c $(PRINTF)length_modifier.c $(PRINTF)print.c\
$(PCONV)conversion_c.c $(PCONV)conversion_c_cap.c $(PCONV)conversion_d.c $(PCONV)conversion_o.c $(PCONV)conversion_p.c $(PCONV)conversion_s.c $(PCONV)conversion_s_cap.c $(PCONV)conversion_u.c $(PCONV)conversion_x.c $(PCONV)conversion_percent.c

PTO = $(PTC:.c=.o)

all: $(NAME)

$(NAME): $(PTO)
	ar rc $(NAME) $(PTO)
	ranlib $(NAME)

clean:
	rm -f $(PTO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
