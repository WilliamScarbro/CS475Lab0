CC = gcc
Targets = FLT 
LIB_C = Debug.c
LIB_H = Debug.h

all: $(Targets)

FLT: FLT.c 
	$(CC) -o $@ $^

clean:
	rm -f $(Targets)
