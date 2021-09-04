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
    int n;
    char text[4];
    char text2[4];
    A = (Room **) calloc(N, sizeof (Room *));
    for (i = 0; i < N; i++) {
        A[i] = (Room *) calloc(M, sizeof (Room));
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            {   
                sprintf(text, "%d", i+1);
                sprintf(text2, "%d", j+1);
                Room r={*text,*text2};
                r.status='L';
                A[i][j]=r;
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
                printf("%c ", A[i][j].status);
            }
        }
        printf("\n");
    }
}

void addMatrizEnPos(Room **A, int N, int M, Room r) {
    if (A[N][M].status != 'O')
        A[N][M] = r;
}

int contarHabitaciones(Hotel ho, char o) {
    int contador = 0;

        for (int i = 0; i < ho.n; i++) {
            for (int j = 0; j < ho.m; j++) {
                {
                    if (ho.hotel[i][j].status == o) {
                        contador = contador + 1;
                    }
                }
            }
    }
    return contador;
}

int contarHabitacionesCantidadDeCamas(Hotel ho, int canti){
    int contador = 0;

        for (int i = 0; i < ho.n; i++) {
            for (int j = 0; j < ho.m; j++) {
                {
                    if (ho.hotel[i][j].status == 'L' && ho.hotel[i][j].numBeds==canti) {
                        contador = contador + 1;
                    }
                }
            }
    }
    return contador;
}

/*
float cancelarPorNumHabitacion(Hotel ho, char* id){
    
    for (int i = 0; i < ho.n; i++) {
            for (int j = 0; j < ho.m; j++) {
                {
                    if (ho.hotel[i][j].id == 'L' && ho.hotel[i][j].) {
                        
                    }
                }
            }
    }
}
*/
