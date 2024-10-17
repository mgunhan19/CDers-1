#include <stdio.h>
#include <stdlib.h>
// Ders 1
struct dugum//yapý oluþturma 
{
	int veri;
	struct dugum*gosterici;
	
};
int main(){
	struct dugum*bir;//düðüm oluþturma
	bir=(struct dugum*)malloc(sizeof( struct dugum ));//bellekte yer ayýrma
	
		struct dugum*iki;
	iki=(struct dugum*)malloc(sizeof( struct dugum ));
	
		struct dugum*uc;
	uc=(struct dugum*)malloc(sizeof( struct dugum ));
	
		struct dugum*dort;
	dort=(struct dugum*)malloc(sizeof( struct dugum ));
	
	bir->veri=11;//veri giriþi yaptýk
	bir->gosterici=iki;//bir sonraki düðümü gösterdik 
	
	iki->veri=22;
	iki->gosterici=uc;
	
	uc->veri=33;
	uc->gosterici=dort;
	
	dort->veri=44;
	dort->gosterici=NULL ;
printf("%d -%d - %d - %d",bir->veri,iki->veri,uc->veri,dort->veri);



return 0;
}
