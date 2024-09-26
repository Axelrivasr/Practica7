/*
programa que recibe una cadena y dice si esta vacia o no
@author:Rivas Romero Axel Emmanuel 
@date:26/09/2024
*/
#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("ingreasa una cadena\n");
    fgets(str, 100, stdin);
        //(condición)? accion_verdadesra : acción_fals
        printf("%s", (strlen(str)==1)? "cadena cacia": "cadena no vaciaªn");

    return 0;
}
