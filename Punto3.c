#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

char **V, *Buff;
int n=0,cant;
//El usuario ingresa cantidad de nombres
printf("Ingrese la cantidad de nombres:");
scanf("%i",&cant);
getchar(); //para que no ingrese un enter basura

//Declaracion de memoria dinamica
V=(char **)malloc(sizeof(char*)*cant);
Buff= (char *) malloc(100*sizeof(char));

//Ingreso de datos
while (n<cant)
{
    printf("Ingrese el nombre numero [%d]: ",n+1);
    gets (Buff);
    *(V+n) = (char *) malloc((strlen(Buff)+1)*sizeof(char));
    strcpy(V[n],Buff);
    n++;
}

//Mostrar datos por pantalla
for (int i = 0; i < n; i++)
{
    printf("El nombre numero [%d] es: [%s]\n",i+1,*(V+i));
}

for (int j = 0; j < n; j++)
{
     free(V[j]);
}

free(Buff);
return 0;
}