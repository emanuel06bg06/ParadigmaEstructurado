/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "header.h"

int **inicializarMatriz(int N, int M){
	int **A;
	int i;
	
	A = (int **)calloc(N, sizeof(int *));
	for(i=0; i<N; i++){
		A[i] = (int *)calloc(M, sizeof(int));
	}
	
	return A;
}

void cargarMatriz(int **A, int N, int M){
	int i, j;
	
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("Ingrese elemento (%d, %d): ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
}

void mostrarMatriz(int **A, int N, int M){
	int i, j;
	
	for(i=0; i<N; i++){
		for(j=0; j<M; j++){
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
}