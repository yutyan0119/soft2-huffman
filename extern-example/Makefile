CC = gcc

SRCS = $(wildcard *.c)
OBJS = $(SRCS:%.c=%.o)

test: $(OBJS)
	$(CC) -o $@ $^

.PHONY: clean tmpclean
clean: tmpclean
	rm -f $(OBJS) test
tmpclean:
	rm -f *~
