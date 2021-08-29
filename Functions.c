/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "header.h"

Room **inicializarMatriz(int N, int M) {
    Room **A;
    int i;

    A = (Room **) calloc(N, sizeof (Room *));
    for (i = 0; i < N; i++) {
        A[i] = (Room *) calloc(M, sizeof (Room));
    }

    return A;
}

void cargarMatriz(Room **A, int N, int M, Room r) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (*A[i][j].id != '\0') {
                printf("ESPACIO LLENO\n");
            } else
 {
                A[i][j] = r;
            }
        }
    }
}

void mostrarMatriz(Room **A, int N, int M) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (*A[i][j].id == '\0') {
                printf("NULL ");
            } else {
                printf("%s ", A[i][j].id);
            }
        }
        printf("\n");
    }
}