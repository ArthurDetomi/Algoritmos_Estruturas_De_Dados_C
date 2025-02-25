CC = gcc
CFLAGS = -Wall -Wextra -g

%: %.c
	$(CC) $(CFLAGS) -o $@.out $<

clean:
	@echo 'Cleaning...'
	rm *.out
