#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10 

void fBolha(int *pVetor); 

int main()
{
    int vVetor[TAM]; 
    int vAux;

    srand ( time(NULL) );
    printf("\n\t Dados nao Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ )
    {
        vVetor[vAux] = (rand() % 9) + 1; // Preenche o vetor randomicamente com valores de 1 a 9
        printf(" %d,",vVetor[vAux]);
    }

    fBolha(vVetor);

    printf("\n\n ");
    printf("\n\t Dados Ordenados\n\n");
    for ( vAux=0; vAux<TAM; vAux++ )
    {
        printf(" %d,",vVetor[vAux]);
    }

    printf("\n\n ");
    system("pause");
}

void fBolha(int *pVetor)
{
    int vAuxiliar;
    int vTemp;
    int vTroca;

   for( vAuxiliar = TAM-1; vAuxiliar >= 0; vAuxiliar-- ) 
   { 
       for( vTemp = 0; vTemp < vAuxiliar; vTemp++ ) 
       { 
           if( pVetor[vTemp] > pVetor[vTemp+1] )
           { 
               vTroca = pVetor[vTemp]; 
               pVetor[vTemp] = pVetor[vTemp+1];
               pVetor[vTemp+1] = vTroca;
           }
       }
   }
}
