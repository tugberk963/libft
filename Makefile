flags=-Wall -Wextra -Werror -I.


make: main.c
	gcc -o out main.c -I.
