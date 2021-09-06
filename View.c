/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "View.h"

void mainMenu(Hotel h)//principal
{

    int option = -1; // Inicializar a un valor default
    
    do {
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
            case 4:
                printf("Muchas gracias");
                break;
                // METODO  
            default:
                printf("No elegiste una opcion válida\n");
        }
    } while (option != 4);
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
    printf("10. Volver al menu principal.\n");


}

void printMainMenu() {

    printf("****************MENU****************\n");
    printf("******* REPORTERIA DEL HOTEL *******\n");
    printf("\n");
    printf("1. Gestion del Hotel                 \n");
    printf("2. Menu de Reportes                  \n");
    printf("3. Menu de Ganancias                 \n");
    printf("4. Salir                             \n");
    printf("*********REPORTERIA********* \n");


}

void reportsMenu(Hotel h){
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
                printf("%s\n", "");
                printf("%s\n", "Habitaciones de primera clase");
                MostrarMatrizPorClasificacion(h, 'P', canti);
                printf("%s\n", "");
                printf("%s\n", "Habitaciones de segunda clase");
                MostrarMatrizPorClasificacion(h, 'S', canti);
                printf("%s\n", "");
                printf("%s\n", "Habitaciones de tercera clase");
                MostrarMatrizPorClasificacion(h, 'T', canti);

                break;
            case 5:
                system("clear");
                printf("5. Realizar la ocupación de la habitación.   (Ingreso)\n");
                ocuparHabitacionMenu(h);
                break;
            case 6:
                system("clear");
                printf("6. Pagar la habitación utilizando el No. de cédula.\n");
                mostrarMatriz(h.hotel, h.n, h.m);
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
                break;
            default:
                printf("No elegiste una opcion válida\n");
        }
    } while (option != 10);
}

void MostrarMatrizPorClasificacion(Hotel h, char c, int ca) {
    int i, j;

    for (i = 0; i < h.n; i++) {
        for (j = 0; j < h.m; j++) {
            {
                if (h.hotel[i][j].classification == c && h.hotel[i][j].status == 'L' && h.hotel[i][j].numBeds == ca) {
                    printf("%s\t", h.hotel[i][j].id);
                } else {
                    printf("%c\t", '-');
                }
            }
        }
        printf("\n");
    }

}

void ocuparHabitacionMenu(Hotel h){
    
    printf("digite su Numero de Cedula\n");
    char idNum[30]="";
    scanf("%s", &idNum);
    printf("digite su nombre");
    char name[10]="";
    scanf("%s", &name);
    printf("digite su digite su numero de telefono\n");
    long int tel=0;
    scanf("%d", &tel);
    
    Client c={*idNum};
    strcpy(c.name, name);

    c.telephoneNum=tel;
    
    printf("Digite el numero de habitacion");
    char habi[4]="";
    scanf("%s", &habi);
    printf("Cantidad de Adultos");
    int adu=0;
    scanf("%d", &adu);
    printf("Cantidad de Niños");
    int ni=0;
    scanf("%d", &ni);
    printf("Digite la cantidad de Dias");
    int dia=0;
    scanf("%d", &dia);
    printf("Hora de entrada formato 24horas");
    int ho1=0;
    scanf("%d", &ho1);
    printf("Hora de salida formato 24horas");
    int ho2=0;
    scanf("%d", &ho2);

    float costo=(ni*200*dia)+(adu*300*dia);
    Info inf={adu,ni,dia,0,ho1,ho2,costo,0};
    
    ocuparHabitacion(h, habi, inf, c);
    
    printf("su registro de habitacion fue completado");
}