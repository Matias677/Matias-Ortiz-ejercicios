#include <stdio.h>
float calcular_promedio(float*a); //a = suma total
float notas[]= {6.5 , 7.1 , 6.5 , 6.1};
int n = sizeof (notas) / sizeof (notas[0]);
int main(){
//printf("EL promedio es %.2f", suma/n);
printf("El promedio puntero es: %.2f", calcular_promedio(notas));
return 0;
}
float calcular_promedio(float*a){
    float suma = 0;
    for (int i = 0; i < 5; i++)
{
    printf("nota %d: %.1f\n", i + 1, notas[i]);
    suma = suma + notas[i];
}
    return *a / 5;
}