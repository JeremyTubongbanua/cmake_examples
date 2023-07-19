# makefile_example

Run this example by typing:

```sh
make clean
make build
make run
```

## Makefile

At the end of the day, Makefile is just running shell commands.

The Makefile:

```makefile
TARGET=main

all: clean build run

clean:
	rm -rf bin
	rm -f main.o

build:
	mkdir -p bin
	cc src/main.c src/add.c -o bin/main.o -Iinclude

run: build
	./bin/main.o
```

- I have a variable `TARGET` that I can use in my Makefile. I can use it like this:
- Makefile commands `clean`, `build`, and `run` are just running shell commands. You can execute these individual functions by typing `make <command>` (`make clean`, for example).