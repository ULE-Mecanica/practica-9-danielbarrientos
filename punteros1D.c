#include <stdio.h>
#include <stdlib.h>



int main ()
{

int n,i,min;
int *p;

  printf("Introduce el número de elmentos: ");
  scanf("%d",&n);
  
  p=(int*)malloc(n*sizeof(int));
  for (i=0;i<n;i++)
  {
    printf("Dime el valor del elemento: ");
    scanf("%d",&*(p+i));
  
  }

min=*(p+0);

  for (i=0;i<n;i++)
  {
    if (*(p+i)<min)
    {
      min=*(p+i);
    }
  
  }
printf("El mínimo valor introducido es %d\n\n",min); 
free (p);  
return 0;
}
