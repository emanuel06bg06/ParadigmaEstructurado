/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Files.h
 * Author: Emanuel Barrantes Guzmán
 *
 * Created on 4 de septiembre de 2021, 00:31
 */
#include "Header.h"
typedef Room rList[20];
// Functions
void uploadFromAFile(rList r, int *N, FILE *file);
void showRoom(Room r);
void showAllRooms(rList r, int N);
void updateHotel(rList r, int N, FILE *file);//reescribir despues de cambios
Room splitTextArray(char* line);//separar cadena para leer en archivo
