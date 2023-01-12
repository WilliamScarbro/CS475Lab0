// Author: William Scarbro
// Date: January 11, 2023


#include <stdlib.h>
#include <stdio.h>
#include <strings.h>


// There is a much faster (log p) version of this algorithm
int power_mod(int base, int power){
	int res=1;
	for (int i=0; i<power-1; i++){
		res=res*base % power;
	}
	return res;
}

void usage(){
  printf("Usage: FLT base power\n");
}

int main(int argc, char** argv){
  if (argc!=3){
    usage();
    printf("Error: 2 arguments required, recieved %d\n",argc-1);
    exit(1);
  }
  int base = atoi(argv[1]);
  int power = atoi(argv[2]);
  int res = power_mod(base,power);
  if (res!=1){
    #ifdef DEBUG
    fprintf(stderr,"DEBUG: %d^(%d-1)/=1, So %d must not be prime!\n",base,power,power);
    #endif
  }
  printf("FLT: base: %d power: %d result: %d\n",base,power,res);
}
