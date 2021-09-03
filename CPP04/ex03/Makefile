NAME = AMateria

GREEN = "\033[1;32m"
NORMAL = "\033[0m"

all: 
		@clang++ -std=c++98 -Wshadow -Wno-shadow -Wall -Wextra -Werror src/*.cpp main.cpp -o ${NAME}
		@echo ${GREEN}"Compile ${NAME} done!"${NORMAL}

clean:
		@rm -rf ${NAME}

re: clean all