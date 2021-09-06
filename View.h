/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   View.h
 * Author: Emanuel Barrantes Guzmán
 *
 * Created on 1 de septiembre de 2021, 22:01
 */
#ifndef VIEW_H
#define VIEW_H

#include "Header.h"
void mainMenu(Hotel h); //principal
void reportsMenu(Hotel h); //reportes
void profitsMenu(Hotel h); //ganancias
void printReportsMenu();
void printMainMenu();


void MostrarMatrizPorClasificacion(Hotel h, char c, int ca);


void ocuparHabitacionMenu(Hotel h);
#endif	// VIEW_H

