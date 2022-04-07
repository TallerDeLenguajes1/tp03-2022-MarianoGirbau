#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

char *V[5], *Buff,*Nombre;
int n=0;

Buff= (char *) malloc(100*sizeof(char));
while (n<5)
{
    printf("Ingrese el nombre numero [%d]: ",n+1);
    gets (Buff);
    V[n] = (char *) malloc((strlen(Buff)+1)*sizeof(char));
    strcpy(V[n],Buff);
    n++;
}
for (int i = 0; i < n; i++)
{
    printf("El nombre numero [%d] es: [%s]\n",i,*(V+i));
}

for (int j = 0; j < n; j++)
{
     free(V[j]);
}

free(Buff);
return 0;
}