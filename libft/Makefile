#------------------------------------------------------------------------------#
#                                  GENERICS                                    #
#------------------------------------------------------------------------------#

# Special variables
DEFAULT_GOAL: all
.DELETE_ON_ERROR: $(NAME)
.PHONY: all bonus clean fclean re

# Hide calls
export VERBOSE	=	FALSE
ifeq ($(VERBOSE),TRUE)
	HIDE =
else
	HIDE = @
endif


#------------------------------------------------------------------------------#
#                                VARIABLES                                     #
#------------------------------------------------------------------------------#

# Compiler and flags
CC		=	gcc
AFLAGS	=	-rcs
CFLAGS	=	-Wall -Werror -Wextra
RM		=	rm -rf

# Dir and file names
NAME	=	libft.a
SRCDIR	=	src/
OBJDIR	=	bin/
SRCS	=	src/chr_append.c		\
			src/chr_prepend.c		\
			src/free_double_array.c	\
			src/ft_atoi.c			\
			src/ft_bzero.c			\
			src/ft_calloc.c			\
			src/ft_free.c			\
			src/ft_isalnum.c		\
			src/ft_isalpha.c		\
			src/ft_isascii.c		\
			src/ft_isdigit.c		\
			src/ft_isprint.c		\
			src/ft_isspace.c		\
			src/ft_itoa.c			\
			src/ft_itox.c			\
			src/ft_linelen.c		\
			src/ft_lstadd_back.c	\
			src/ft_lstadd_front.c	\
			src/ft_lstclear.c		\
			src/ft_lstdelone.c		\
			src/ft_lstiter.c		\
			src/ft_lstlast.c		\
			src/ft_lstmap.c			\
			src/ft_lstnew.c			\
			src/ft_lstsize.c		\
			src/ft_memchr.c			\
			src/ft_memcmp.c			\
			src/ft_memcpy.c			\
			src/ft_memmove.c		\
			src/ft_memset.c			\
			src/ft_numlen_base.c	\
			src/ft_ptoa.c			\
			src/ft_putchar_fd.c		\
			src/ft_putendl_fd.c		\
			src/ft_putnbr_fd.c		\
			src/ft_putstr_fd.c		\
			src/ft_split.c			\
			src/ft_strchr.c			\
			src/ft_strdup.c			\
			src/ft_striteri.c		\
			src/ft_strjoin.c		\
			src/ft_strlcat.c		\
			src/ft_strlcpy.c		\
			src/ft_strlen.c			\
			src/ft_strlen_before.c	\
			src/ft_strlen_until.c	\
			src/ft_strmapi.c		\
			src/ft_strncmp.c		\
			src/ft_strnstr.c		\
			src/ft_strrchr.c		\
			src/ft_strtrim.c		\
			src/ft_strtrim_free.c	\
			src/ft_substr.c			\
			src/ft_swap.c			\
			src/ft_tolower.c		\
			src/ft_toupper.c		\
			src/ft_utoa.c			\
			src/get_next_line.c		\
			src/int_realloc.c		\
			src/join_free_both.c	\
			src/sort_int_tab.c		\
			src/str_append.c		\
			src/str_prepend.c		\
			src/strcdup.c			\
			src/ft_strndup.c		\
			src/strpop.c			\
			src/xfree.c
OBJS	=	$(patsubst $(SRCDIR)%.c,$(OBJDIR)%.o,$(SRCS))


#------------------------------------------------------------------------------#
#                                 TARGETS                                      #
#------------------------------------------------------------------------------#

all: $(NAME)

# Links static library from object files
$(NAME): $(OBJS)
	$(HIDE)ar $(AFLAGS) $@ $^

# Compiles object files from sources
$(OBJS): $(OBJDIR)%.o : $(SRCDIR)%.c $(OBJDIR)
	$(HIDE)$(CC) $(CFLAGS) -c $< -o $@

# Created bin directory
$(OBJDIR):
	$(HIDE)mkdir -p $(OBJDIR)


# Removes objects
clean:
	$(HIDE)$(RM) $(OBJS)

# Removes objects and executables
fclean: clean
	$(HIDE)$(RM) $(NAME)

# Removes objects and executables and remakes
re: fclean all
