NAME = phonebook

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Contact.cpp PhoneBook.cpp main.cpp\

OBJS =  $(SRC:.cpp=.o) 

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
