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
    printf("10. Salir.\n");
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
    int option = -1; // Inicializar a un valor default
    system("clear");
    do {
        printReportsMenu();
        printf("Ingrese la opcion ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                system("clear");
                printf("1. Cuántas habitaciones están libres \n");
                printf("%d %s\n ", contarHabitaciones(h, 'L'), "habitaciones");
                break;
            case 2:
                system("clear");
                printf("2. Cuántas están en mantenimiento\n");
                printf("%d %s\n ", contarHabitaciones(h, 'M'), "habitaciones");
                break;
            case 3:
                system("clear");
                printf("3. Cuántas habitaciones ocupadas\n");
                printf("%d %s\n ", contarHabitaciones(h, 'O'), "habitaciones");
                break;
            case 4:
                system("clear");
                printf("4. Cuántas hay desocupadas por cantidad de camas.\n");
                printf("Digite la cantidad de Camas.\n");
                int canti;
                scanf("%d", &canti);
                printf("%d %s %d %s\n ", contarHabitacionesCantidadDeCamas(h, canti), "habitaciones libres con", canti, "de camas");
                break;
            case 5:
                system("clear");
                printf("5. Realizar la ocupación de la habitación.   (Ingreso)\n");

                break;
            case 6:
                system("clear");
                printf("6. Pagar la habitación utilizando el No. de cédula.\n");

                break;
            case 7:
                system("clear");
                printf("7. Liberar la habitación utilizando el No. de cédula.\n");

                break;
            case 8:
                system("clear");
                printf("9.Cuántas personas adultas hay el día de hoy.\n");

                break;
            case 9:
                system("clear");
                printf("9. Cuántos niños existen al día de hoy en el hotel\n");

                break;
            case 10:
                system("clear");
                printf("Salir");
                break;
            default:
                printf("No elegiste una opcion válida\n");
        }
    } while (option != 10);
}