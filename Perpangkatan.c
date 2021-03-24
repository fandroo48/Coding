#include <stdio.h>
#include <stdlib.h>

int pangkat(int a, int b){
int hasil,i;
hasil=1;
for(i=1;i<=b;i++){
hasil= hasil * a;
}
return hasil;
}

main(){
int hasilPangkat,bil1,bil2;
bil1=2;bil2=3;
hasilPangkat=pangkat(bil1,bil2);
printf("%d pangkat %d = %d\n",bil1,bil2,hasilPangkat);

bil1=3;bil2=2;
hasilPangkat=pangkat(bil1,bil2);
printf("%d pangkat %d = %d\n",bil1,bil2,hasilPangkat);
}
