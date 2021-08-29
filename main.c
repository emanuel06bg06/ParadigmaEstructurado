#include "Header.h"



/* 
 * File:   main.c
 * Author: Emanuel Barrantes Guzmán
 *
 * Created on 24 de agosto de 2021, 16:51
 */
#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int **A;
	int N = 3, M = 3;
	
	A = inicializarMatriz(N, M);
	cargarMatriz(A, N, M);
	mostrarMatriz(A, N, M);
	
	return 0;
}
