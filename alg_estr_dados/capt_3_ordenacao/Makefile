CC = gcc
CFLAGS = -Wall -Wextra -g

%: %.c
	$(CC) $(CFLAGS) -o $@.out $< algorithms.c

clean:
	@echo 'Cleaning...'
	rm *.out
