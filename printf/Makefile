NAME = libftprintf.a

src = ft_printf.c ft_write.c ft_write2.c 

FLGS =  -Wall -Wextra  -Werror

CC = cc

AR = ar rcs

RM = rm -f

OBJ = $(src:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) 
	$(AR)  $(NAME) $(OBJ) 
		
%.o :%.c libftprintf.h
	$(CC) $(FLG)  -c $<

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : clean all 

.PHONY: clean fclean 





