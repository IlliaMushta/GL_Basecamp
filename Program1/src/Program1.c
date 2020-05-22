/*
 ============================================================================
 Name        : Program1.c
 Author      : Illia
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char **argv) {
	int N = atoi(argv[1]);
	int K = atoi(argv[2]);
	int rez = 0;
	float rez1 = 0;
	int answer = 0;
	rez = N % (K + 1);
	rez1 = (float)N/(K+1);
	if(rez > 0){answer = (int)rez1 + 1;}
	else{answer = (int)rez1;}

	printf("%d\n",answer);

	return EXIT_SUCCESS;
}
