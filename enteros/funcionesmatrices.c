#include <stdio.h>
#include "funcionesmatrices.h"

void matrizInit(int N, int matriz[N][N]) {
	for (int i=0; i<N; i++) 
		for (int j=0; j<N; j++)
			matriz[i][j] = 2*(j-i);
}

void multiplicacionMatrices(int N, int matrizA[N][N], int matrizB[N][N], int matrizC[N][N]) {
	for (int i=0; i<N; i++)
		for (int j=0; j<N; j++) {
			matrizC[i][j] = 0;
			for (int k=0; k<N; k++)
				matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
		}
}

void imprimirMatriz(int N, int matriz[N][N]) {
	for (int i=0; i<N; i++) {
		for (int j=0; j<N; j++)
			printf("%d\t", matriz[i][j]);
		printf("\n");
	}
}

