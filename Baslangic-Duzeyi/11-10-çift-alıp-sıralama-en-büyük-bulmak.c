#include <stdio.h>
// 10 �ift say� alana kadar say� giriyoruz. 10 �ift say� tamamlan�nca �iftlerin en b�y���n� buluyoruz. hem en b�y��� hem de s�ralamas�n� yazd�r�yoruz.
int main(){
	int sayi,enb,cs=0,gecici=0,ciftdizi[10];
	enb=ciftdizi[0]; // cs : cift sayac
	for(int i=0;;i++){
		printf("Sayi giriniz : "); scanf("%d",&sayi);
		if(sayi%2==0){
			ciftdizi[cs]=sayi;
			cs++;			
		}
		if(cs==10){
			break;
		}
	}
	for(int i=1;i<10;i++){
		if(ciftdizi[i]>enb){
			enb=ciftdizi[i];
		}
	}
	printf("\nEn buyuk cift sayiniz : ",enb);
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(ciftdizi[j]>ciftdizi[j+1]){
				gecici=ciftdizi[j];
				ciftdizi[j]=ciftdizi[j+1];
				ciftdizi[j+1]=gecici;		
			}
		}
	}
	printf("\nCift sayilarinizin siralamasi : ");

	for(int i=0;i<10;i++)	{
		printf("%d\t", ciftdizi[i]);
	}
	return 0;
}
