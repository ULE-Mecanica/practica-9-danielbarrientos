#include <stdio.h>
#include <stdlib.h>


int main ()
{
int i,j,fil,col,suma=0;
int *mat;

printf("Introduce el primer número: ");
scanf("%d", &fil);
printf("Introduce el primer número: ");
scanf("%d", &col);

mat=(int *)malloc(fil*col*sizeof(int));


  for (i=0;i<fil;i++)
  {
    for (j=0;j<col;j++)
    {
      scanf("%d",&*(mat+fil*i+j));
      suma=suma+*(mat+fil*i+j);
    }
  }


  for (i=0;i<fil;i++)
  {
    for (j=0;j<col;j++)
    {
      printf("%4d",*(mat+fil*i+j));
    }
    printf("\n");
  }



printf("\nLa suma de los elementos de la matriz es %d\n\n",suma);

free(mat);
return 0;
}
