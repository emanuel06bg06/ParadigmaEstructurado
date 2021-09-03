/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "View.h"

void mainMenu(Hotel h)//principal
{

    int option = -1; // Inicializar a un valor default
    printMainMenu();
    scanf("%d", &option);
    system("clear");
    switch (option) {
        case 1:
            // METODO 
            printf("Falta implementar este menu");
            break;
        case 2:
            reportsMenu(h);
            break;
        case 3:
            printf("Falta implementar este menu");
            break;
            // METODO            
        default:
            printf("No elegiste una opcion válida\n");
    }
}

void printReportsMenu() {
    printf("*********CITY EXPRESS*********\n\n");
    printf("****************MENU****************\n");
    printf("******* REPORTERIA DEL HOTEL *******\n");
    printf("\n");
    printf("1. Cuántas habitaciones están libres\n");
    printf("2. Cuántas están en mantenimiento\n");
    printf("3. Cuántas habitaciones ocupadas\n");
    printf("4. Cuántas hay desocupadas por cantidad de camas.\n");
    printf("5. Realizar la ocupación de la habitación.   (Ingreso) \n");
    printf("6. Pagar la habitación utilizando el No. de cédula.  \n");
    printf("7. Liberar la habitación utilizando el No. de cédula. \n");
    printf("9. Cuántos niños existen al día de hoy en el hotel.\n");
    printf("*********REPORTERIA********* \n");


}

void printMainMenu() {

    printf("****************MENU****************\n");
    printf("******* REPORTERIA DEL HOTEL *******\n");
    printf("\n");
    printf("1. Gestion del Hotel                 \n");
    printf("2. Menu de Reportes                  \n");
    printf("3. Menu de Ganancias                 \n");
    printf("*********REPORTERIA********* \n");


}

void reportsMenu(Hotel h)//principal
{
    printReportsMenu();
    int option = -1; // Inicializar a un valor default
    printf("Ingrese la opcion ");
    scanf("%d", &option);
    system("clear");
    switch (option) {
        case 1:

            printf("1. Cuántas habitaciones están libres \n");

            printf("%d %s\n ",contarHabitacionesLibres(h.hotel, 'L', h.m, h.n), "habitaciones");

            break;
        case 2:
            printf("2. Cuántas están en mantenimiento\n");

            // METODO            break;
        case 3:
            printf("3. Cuántas habitaciones ocupadas\n");

            // METODO            break;
        case 4:
            printf("4. Cuántas hay desocupadas por cantidad de camas.\n");

            // METODO            break;
        case 5:
            printf("5. Realizar la ocupación de la habitación.   (Ingreso)\n");

            // METODO            break;
        case 6:
            printf("6. Pagar la habitación utilizando el No. de cédula.\n");

            // METODO            break;
        case 7:
            printf("7. Liberar la habitación utilizando el No. de cédula.\n");

            // METODO            break;
        case 8:

            printf("9.Cuántas personas adultas hay el día de hoy.\n");

            // METODO            break;
        case 9:
            printf("9. Cuántos niños existen al día de hoy en el hotel\n");

            // METODO            break;
        default:
            printf("No elegiste una opcion válida\n");
    }
}