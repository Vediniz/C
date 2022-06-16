#include <stdio.h>
#include <stdlib.h> 

int main(){
    float vetor_um[20];
    float vetor_dois[20];
    float interseccao[20];
    float temp = 0;
    int cont = 0;

    for(int i = 0; i < 20; i++){
        vetor_um[i] = rand() % 10;
        vetor_dois[i] = rand()% 10;
    } 
    


    for(int i = 0; i < 20; i++){
        temp = vetor_um[i];

        for(int j = 0; j < 20; j++){
            if(temp == vetor_dois[j]){
                
                for(int k = 0; k < 20; k++){
                    if(temp != interseccao[k] && (k == 19)){
                        interseccao[cont] = vetor_dois[j];
                        cont++;
                    }
                    else{
                        if(temp == interseccao[k]){
                            k = 19;
                        }
                    }
                
            }
            }       
        }
        }
      

    

    for(int i = 0; i < cont; i++){
        printf(" %f", interseccao[i]);
       
    }

    printf("%d", cont);

    return 0;

}
//intersecção == elementos comuns