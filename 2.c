#include <stdio.h>

int main(){
    float nota,me;
    float ma = 0;

    for(int i = 0; i < 3; i++){
        printf("\nNota N%d:\n",i+1);
        scanf("%f", &nota);
        ma += (nota * (i+1));
    }
    printf("\nNota media dos exercicios:");
    scanf("%f", &me);
    ma = (ma + me)/ 7;

    char letra;

    if(ma < 4){
        letra = 'E';
    }else{ if(ma < 6){
            letra = 'D';
        }else{ if(ma < 7.5){
                letra = 'C';
            }else{ if(ma < 9){
                    letra = 'B';
                }else{
                    letra = 'A';
                }
            }
        }
    }

    printf("\nMedia de aproveitamento = %c\n",letra);

    return 0;
}