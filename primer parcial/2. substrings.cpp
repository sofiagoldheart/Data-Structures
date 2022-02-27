//Fecha de creacion: 22/01/2022
//Fecha de ultima actualizacion: 24/01/2022
//Nombre del programa: Substrings - Funciones y arreglos
//Nombre del programador: Sofia Ruvalcaba de la Noval

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[1000];
    char B[1000];
    int res=0;

    scanf("%s%s",A,B);

    for(int i=0; i < strlen(A); i++){
        int count=0;
        for(int j=0;j < strlen(B);j++)
        {
        if(A[i]==B[j])
        {
        B[j]='A';
        count++;
        }

        }
        if(count>0)
        res++;
        }

    printf("%d",res);

}
