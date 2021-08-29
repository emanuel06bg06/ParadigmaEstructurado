/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Header.h
 * Author: Emanuel Barrantes Guzmán
 *
 * Created on 24 de agosto de 2021, 19:13
 */
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MY_STRING_SIZE 30
//Estructuras

typedef struct {
    char name[MY_STRING_SIZE];
    long int idNum;
    char paymentType;
    int days;
    int telephoneNum;
    long int accountNum;

} Client;

typedef struct {
    int numAdult;
    int numChild;
    int days;
    char status;
} Info;

typedef struct {
    char id[MY_STRING_SIZE];
    char status;
    Client ptrC;
} Room;

typedef struct {
    int row;
    int column;
    Room ptrRoom;
} Building;
//Functions
Room **inicializarMatriz(int N, int M);
void cargarMatriz(Room **A, int N, int M, Room r);
void mostrarMatriz(Room **A, int N, int M);



















