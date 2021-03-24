#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,a;
  printf("masukan bilangan : ");
    scanf("%d",&a);

  printf("\nbilangan ganjil-genap dari 0 hingga %d adalah :\n",a);

    printf("Genap\tGanjil\n");

  for (i=0; i<=a; i++){
    printf("%d\t",i);
    i++;
  if(i<=a)
      printf("%d\n",i);
    
  }
}
