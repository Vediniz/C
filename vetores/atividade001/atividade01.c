#include <stdio.h> 
#include <stdlib.h> 

int main(){
    int numeros[10];
    int numeros_pares[10]; 
    int numeros_impares[10];
    int contador_par, contador_impar = 0;

    for (int i = 0; i < 10; i++){
        printf("Digite o %d numero: ", i + 1);
        scanf("%d",&numeros[i]);

        if (numeros[i] % 2 == 0 ){
            numeros_pares[contador_par]= numeros[i];
            contador_par += 1;
            
        }
        else{
            numeros_impares[contador_impar] = numeros[i];
            contador_impar += 1;
            
        }
    }

    printf("\nNumeros pares: ");
    for (int i = 0; i < contador_par; i++){
        printf(" [%d]", numeros_pares[i]);
    }

    printf("\nNumeros impares: ");
    for (int i = 0; i < contador_impar; i++){
        printf(" [%d]", numeros_impares[i]);
    }
    


    //system("pause");
    return 0;    
}