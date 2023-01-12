CC = gcc
Targets = FLT FLT_DEBUG
LIB_C = Debug.c
LIB_H = Debug.h

all: $(Targets)

FLT_DEBUG: FLT.c 
	$(CC) -o $@ $^ -DDEBUG

FLT: FLT.c 
	$(CC) -o $@ $^

clean:
	rm $(Targets)
