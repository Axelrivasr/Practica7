/*
programa que recibe dos cadenas y compara si son iguales o no
@author:Rivas Romero Axel Emmanuel 
@date:26/09/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[100];

    printf("ingresa la primera caden\n");
    fgets(str, 100, stdin);

    switch(str[0])
    {
        case 'a': case 'A':
            printf("la cadena comienza en a\n");
            break;

        case 'e': case 'E':
            printf("la cadena comienza en e\n");
            break;

        case 'i': case 'I':
        printf("la cadena comienza en i\n");



        case 'o': case 'O':
            printf("la cadena comienza en o\n");
            break;

        case 'u': case 'U':
            printf("la cadena comienza en u\n");
            break;
        default:
            break;
    }
    return 0;
}
