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
    char idNum[MY_STRING_SIZE];
    char paymentType;//E,D,C
    long int telephoneNum;
    long int accountNum;

} Client;

typedef struct {
    int numAdult;
    int numChild;
    int days;
    int status;
    int entranceHour;
    int deparetureHour;
    float cost;
    int statusRoom;//paga o no
} Info;

typedef struct {
    char id[MY_STRING_SIZE];
    char status; //('O':ocupada,'M'-:mantenimiento,'L':libre)
    Client *ptrC;
    int numBeds;
    char classification[MY_STRING_SIZE];
    Info *info;
} Room;

//Functions
Room **inicializarMatriz(int N, int M);
void cargarMatriz(Room **A, int N, int M, Room r);
void mostrarMatriz(Room **A, int N, int M);
void addMatrizEnPos(Room **A, int N, int M,Room r);

int contarMatriz(Room **A, char o, int N, int M);




















