#include <stdio.h>
#include <stdlib.h>
// Ders 1
struct dugum//yap� olu�turma 
{
	int veri;
	struct dugum*gosterici;
	
};
int main(){
	struct dugum*bir;//d���m olu�turma
	bir=(struct dugum*)malloc(sizeof( struct dugum ));//bellekte yer ay�rma
	
		struct dugum*iki;
	iki=(struct dugum*)malloc(sizeof( struct dugum ));
	
		struct dugum*uc;
	uc=(struct dugum*)malloc(sizeof( struct dugum ));
	
		struct dugum*dort;
	dort=(struct dugum*)malloc(sizeof( struct dugum ));
	
	bir->veri=11;//veri giri�i yapt�k
	bir->gosterici=iki;//bir sonraki d���m� g�sterdik 
	
	iki->veri=22;
	iki->gosterici=uc;
	
	uc->veri=33;
	uc->gosterici=dort;
	
	dort->veri=44;
	dort->gosterici=NULL ;
printf("%d -%d - %d - %d",bir->veri,iki->veri,uc->veri,dort->veri);



return 0;
}
