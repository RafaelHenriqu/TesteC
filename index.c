#include <stdlib.h>
int Distancia(x,y){
    int Result = abs(x - y);
    return Result;
}


int main(){
    int X,Y;
    printf("Inicial: ");
    scanf("%i",&X);
    printf("Final: ");
    scanf("%i",&Y);


    printf("%i",Distancia(X,Y));
}
