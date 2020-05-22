/*
 ============================================================================
 Name        : Program2.c
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
	int D = atoi(argv[2]);
	int rez = 0;
	for(int i = 1; i <= N; i++)
	{
		rez = rez+i*D;
	}
	printf("%d\n",rez);
	return EXIT_SUCCESS;
}
