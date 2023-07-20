# Compiler
CC = clang++

# .cpp files
OBJC = main.cpp

# Compiler Flags
CFLAGS = -Wall -Wextra -Werror -pedantic

# Output
COUT = Reverse

.PHONY: app clean

app : $(OBJC)
	mkdir -p bin; $(CC) $(CFLAGS) -o bin/$(COUT) $(OBJC)


clean :
	rm -rf bin/
