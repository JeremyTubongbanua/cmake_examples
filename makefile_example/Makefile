
TARGET=main

all: clean build run

clean:
	rm -rf bin
	rm -f main.o

build:
	mkdir -p bin
	$(CC) src/main.c src/add.c -o bin/main.o -Iinclude

run: build
	./bin/main.o

