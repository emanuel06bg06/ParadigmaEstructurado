/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Files.h"



// Functions

void uploadFromAFile(rList r, int *N, FILE *file) {
    char line[200];
    int i = 0;

    while (!feof(file)) {
        fgets(line, 200, file);
        r[i] = splitTextArray(line);
        i++;
    }

    *N = i;
}

Room splitTextArray(char * line) {
    Room r;
    char *token = strtok(line, ",");
    strcpy(r.id, token);
    token = strtok(NULL, ",");
    
    return r;
}