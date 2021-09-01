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
    Client cliente = {"Elun Musk","1659", 'E', 321111, 68988881};
    Client *clienteptr = &cliente;
    //printf("%s", clienteptr->name);
    Room **A;
    Room room = {"X", 'O', clienteptr,1,"C"};
    Room room2 = {"XI", 'O', clienteptr};
    int N = 3, M = 3;
    A = inicializarMatriz(N, M);
    addMatrizEnPos(A,2,2,room);
    addMatrizEnPos(A,0,2,room2);
    mostrarMatriz(A, N, M);
   

    return 0;
}
