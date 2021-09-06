
#ifndef VIEW_H
#define VIEW_H

#include "Header.h"
void Inicializar();
void mainMenu(Hotel h); //principal
void reportsMenu(Hotel h); //reportes
void profitsMenu(Hotel h); //ganancias
void printReportsMenu();
void printMainMenu();
void pagarHabitacionMenu(Hotel h);
void LiberarHabitacionMenu(Hotel h);
void MostrarMatrizPorClasificacion(Hotel h, char c, int ca);


void ocuparHabitacionMenu(Hotel h);
#endif	// VIEW_H

