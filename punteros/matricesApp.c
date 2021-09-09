#include <stdio.h>
#include <stdlib.h>
#include "funcionesmatrices.h"
#include "ctime.h"

#define SIZE_DATA (1024*1024*64*3)

static double MEM_CHUNK[SIZE_DATA];

int main(int argc, char **argv) {
	// ** -->doble puntero
	
	int N;
    N = (int) atof(argv[1]);
	double *matrizA, *matrizB, *matrizC;

	matrizA = MEM_CHUNK;
	matrizB = matrizA + (N*N);
	matrizC = matrizB + (N*N);

	matrizInit(N, matrizA, matrizB, matrizC);

	sampleStart();

	multiplicacionMatrices(N, matrizA, matrizB, matrizC);

	sampleStop();
	printTime();

	return 0;
}
