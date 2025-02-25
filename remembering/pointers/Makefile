CC = gcc
CFLAGS = -Wall -Wextra -g

%: %.c
	$(CC) $(CFLAGS) -o $@.out $< util.c

clean:
	@echo 'Cleaning...'
	rm *.out
