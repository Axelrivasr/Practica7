/*
programa que recibe dos cadenas y compara si son iguales o no
@author:Rivas Romero Axel Emmanuel 
@date:26/09/2024
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] str2[100];

    printf("ingresa la primera caden\n");
    fgets(str1, 100, stdin);

    printf("ingresa la segunda cadena\n")
    fgets(str2, 100, stdind);

    if (strcmp(str1, str2)==0){
        printf("las cadenas son iguales\n");
    }
    else{
        printf("las cadenas son iguales\n");
    }
    return 0
    
}
