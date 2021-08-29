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

    Client c = {"Elun Musk", 1659, 'E', 3, 68988881};

    Room **A;
    Room room = {"FULL", 'O', c};
    Room room2 = {"A", 'O', c};
    int N = 3, M = 3;

    A = inicializarMatriz(N, M);
    cargarMatriz(A, N, M, room);

    mostrarMatriz(A, N, M);
    cargarMatriz(A, N, M, room2);
    mostrarMatriz(A, N, M);

    return 0;
}
