/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "header.h"

Room **inicializarMatriz(int N, int M) {
    Room **A;
    Hotel h;
    int i, j;

    Room r = {"A1", 'L'};
    A = (Room **) calloc(N, sizeof (Room *));
    for (i = 0; i < N; i++) {
        A[i] = (Room *) calloc(M, sizeof (Room));
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            {
                A[i][j] = r;
            }
        }
    }
    return A;
}

void cargarMatriz(Room **A, int N, int M, Room r) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {

            if (A[i][j].status == 'L') {
                A[i][j] = r;
            } else
                if (A[i][j].status == 'O') {
                printf("ocupado\n");
            }
        }
    }
}

void mostrarMatriz(Room **A, int N, int M) {
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            {
                printf("%s ", A[i][j].id);
            }
        }
        printf("\n");
    }
}

void addMatrizEnPos(Room **A, int N, int M, Room r) {
    if (A[N][M].status != 'O')
        A[N][M] = r;
}

int contarHabitacionesLibres(Room **A, char o, int N, int M) {
    int contador = 0;

    for (int i = 0; i < N; i++) {
        for (i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                {
                    if (A[i][j].status == 'L') {
                        contador = contador + 1;
                    }
                }
            }
        }
    }
    return contador;
}
