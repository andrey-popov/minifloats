CC = c++
INCLUDE =
OPFLAGS = -O2
CFLAGS = -Wall -Wextra -std=c++11 $(INCLUDE) $(OPFLAGS) $(MACROS)
LDFLAGS =

.PHONY: clean

all: test

test: test.o minifloats.o
	@ $(CC) $(CFLAGS) $(LDFLAGS) $+ -o $@

%.o: %.cpp
	@ $(CC) $(CFLAGS) -c $< -o $@

clean:
	@ rm -f *.o
