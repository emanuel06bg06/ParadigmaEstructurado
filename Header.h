
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MY_STRING_SIZE 30
//Estructuras

typedef struct {
    char name[MY_STRING_SIZE];
    char idNum[MY_STRING_SIZE];
    char paymentType; //E,D,C
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
    int statusRoom; //paga o no
} Info;

typedef struct {
    char id[4];
    char status; //('O':ocupada,'M'-:mantenimiento,'L':libre)
    Client ptrC;
    int numBeds;
    char classification;
    Info info;
} Room;
typedef struct {
    Room **hotel;
    int n;
    int m;
} Hotel;

//Functions
Room **inicializarMatriz(int N, int M);
void cargarMatriz(Room **A, int N, int M, Room r);
void mostrarMatriz(Room **A, int N, int M);
void addMatrizEnPos(Room **A, int N, int M, Room r);


void ocuparHabitacion(Hotel ho, char* id, Info i, Client c);
int contarHabitaciones(Hotel ho, char o);
int contarHabitacionesCantidadDeCamas(Hotel ho, int canti);


float pagarPorId(Hotel ho,char*id);
void liberarHabitacion(Hotel ho, char* id);


int camasAleatorias();
char clasificacionAleatoria();

int cantidadDeAdultos(Hotel h);
int cantidadDeNinos(Hotel h);




















