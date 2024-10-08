CC=g++
CFLAGS=-Wall -g
CPPFLAGS=-std=c++17

.PHONY: all clean
.PRECIOUS: build/%.o

all: build build/$(file).exe

build:
	mkdir build

build/%.exe: build/%.o
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ $<

build/%.o: src/%.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	del /Q build