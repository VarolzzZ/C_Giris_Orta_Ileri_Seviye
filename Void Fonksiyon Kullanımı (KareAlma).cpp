//   bi say� gir. girilen say�n�n karesini void fonksiyonda al ve ayn� adrese ata. 
//   void fonksiyon geri d�n�� de�eri olmayan fonksiyonlard�r.

#include <stdio.h>

void KareAl(int *);

int main(){
	int x;
	printf("Sayi giriniz : "); scanf("%d",&x);
	printf("\nMain'de %d'nin adresi : %x",x,&x);
	KareAl(&x);
}

void KareAl(int *y){
	printf("\n\nFonksiyonda %d'nin adresi : %x",*y,&y);
	*y=(*y)*(*y);
	printf("\n\nSonuc = %d'nin adresi : %x",*y,&y);
}
