// Toplam eleman sayısını kullanıcıdan al. bu sayı kadar bellekten calloc ile yer al. elemanları gir. bu degerler icinde en buyuk olanı yazdır.
// (pointer kullanarak)

#include <stdio.h>
#include <stdlib.h>

int buyuk_bul(int*,int);

int main(){
	int n;
	int *ptr;
	printf("diziniz kac elemanli olacak : "); scanf("%d",&n);
	ptr=(int *)calloc(n,sizeof(int));
	
	for(int i=0;i<n;i++)
		printf("Dizinizin %d. elemanini giriniz : ",i+1); scanf("%d",ptr+i);
	
	printf("Dizinin en buyuk degeri : %d",buyuk_bul(ptr,n));
	
	free(ptr);
	return 0;
}

int buyuk_bul(int *p,int boyut){
	int max=*p;
	for(int i=0;i<boyut;i++){
		if(*(p+i)>max)
			max=*(p+i);
	}
	return max;
}
