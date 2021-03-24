#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,a;
  printf("Masukan Angka : ");
    scanf("%d",&a);

  printf("\n Bilangan ganjil-genap dari 0 hingga %d adalah :\n",a);

    printf("Genap\tGanjil\n");

  for (i=0; i<=a; i++){
    printf("%d\t",i);
    i++;
  if(i<=a)
      printf("%d\n",i);
    
  }
}
