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
    Client cliente = {"Elun Musk", "1659", 'E', 321111, 68988881};
    Client *clienteptr = &cliente;
    //printf("%s", clienteptr->name);
/*
    Room room = {"X", 'L', clienteptr,1, 'C'};
    Room room2 = {"XI", 'L', clienteptr,2,'C'};
*/
    int N = 3, M = 3;
    
     
   Room **A; 
    Hotel h = {A,N,M};
     h.hotel=inicializarMatriz(N, M);;
/*
    addMatrizEnPos(h.hotel, 2, 2, room);
    addMatrizEnPos(h.hotel, 0, 2, room2);
*/
    mostrarMatriz(h.hotel, N, M);
    mainMenu(h);
    return 0;
}
