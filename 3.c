#include <stdio.h>
#include <math.h>

int main(){
    int maxnum;

    printf("Numero maximo(impar): ");
    scanf("%d",&maxnum);
    if(maxnum % 2 == 0){
        printf("Erro. Numero par");
        return 0;
    }
    printf("\n");
    int meio = maxnum/2 + 1;

    int i = 0;
    while(i < meio){
        for(int j = 1; j <= maxnum; j++){
            if(j < i + 1 || j > maxnum - i) {
                printf("  ");
            }
            else{
                printf("%d ", j);
            }
        }
        printf("\n");
        i += 1;
    }

    return 0;
}