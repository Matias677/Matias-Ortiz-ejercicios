#include <stdio.h>
int main(){
float notas[]= {6.5 , 7.1 , 6.5 , 6.1};
for (int i = 0; i < 5; i++)
{
    printf("notas %d: %.1f\n", i + 1, notas[i]);
}
}