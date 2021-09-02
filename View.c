/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "View.h"


void mainMenu()//principal
{
    printf("*********CITY EXPRESS*********\n\n");
   int option = -1; // Inicializar a un valor default
    printf("Ingrese la opcion ");
    scanf("%d", &option);
    system("clear");
    switch (option) {
        case 1:
            printf("Elegiste la opcion %d\n", option);
  // METODO            break;
        case 2:
            printf("Elegiste la opcion %c\n", option);

  // METODO            break;
        default:
            printf("No elegiste una opcion válida\n");
    }
}

void printReportsMenu()
{
     
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
void reportsMenu()//principal
{
    printReportsMenu();
     int option = -1; // Inicializar a un valor default
    printf("Ingrese la opcion ");
    scanf("%d", &option);
    system("clear");
    switch (option) {
        case 1:
            
            printf("1. Cuántas habitaciones están libres %d\n", option);
                                  
            // METODO
            break;
        case 2:
            printf("2. Cuántas están en mantenimiento%c\n", option);

  // METODO            break;
            case 3:
                printf("3. Cuántas habitaciones ocupadas %c\n", option);

  // METODO            break;
            case 4:
                printf("4. Cuántas hay desocupadas por cantidad de camas.%c\n", option);

  // METODO            break;
            case 5:
                printf("5. Realizar la ocupación de la habitación.   (Ingreso)%c\n", option);

  // METODO            break;
            case 6:
                printf("6. Pagar la habitación utilizando el No. de cédula.%c\n", option);

  // METODO            break;
            case 7:
                printf("7. Liberar la habitación utilizando el No. de cédula.%c\n", option);

  // METODO            break;
        case 8:
            
           printf("9.Cuántas personas adultas hay el día de hoy.%c\n", option);

  // METODO            break;
            case 9:
                printf("9. Cuántos niños existen al día de hoy en el hotel %c\n", option);

  // METODO            break;
        default:
            printf("No elegiste una opcion válida\n");
    }
}