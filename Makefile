CC = gcc
Targets = FLT FLT_DEBUG
LIB_C = Debug.c
LIB_H = Debug.h

all: $(Targets)

FLT: FLT.c 
	$(CC) -o $@ $^

clean:
	rm $(Targets)
