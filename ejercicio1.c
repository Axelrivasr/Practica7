/*
programa que recibe una cadena del usuario y verifica su longitud
@author:Rivas Romero Axel Emmanuel 
@date:26/09/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    printf("ingreasa una cadena\n");
    fgets(str, 100, stdin);

    if(1){
        printf("cadena de longitud: %d\n", strlen(str));
    }
    return 0;

}
