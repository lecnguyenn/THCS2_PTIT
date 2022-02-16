//#include <???.h> //Author by Nguyen 
#include <string.h>
#define flush while((getchar()) != '\n')

struct product{
	char name[50];
	int nums;
	float price;
	int importYear;
}; product ss[100];

int count(){
	FILE *outfile = fopen("B17DCPT163.bin","rb") ;
    int c = 0,  temp = fgetc(outfile) ;
    while (temp = fgetc(outfile)!= EOF){
        c ++ ;
        fseek(outfile,sizeof(product)*c, SEEK_SET) ;
    }
    fclose(outfile) ;
    return c;
}

void addnew(int n){
	FILE *outfile = fopen("B17DCPT163.bin","ab");
	
	int c = count();
	for(int i=1 ; i<=n ; i++){
		product s;
		s.nums = i+c;
		flush;
		gets(s.name);
		scanf("%f %d",&s.price,&s.importYear);
		fseek(outfile,0,SEEK_END);
		fwrite(&s,sizeof(s),1,outfile);
	}
	fclose(outfile);
}

void edit(int n){
	FILE *outfile = fopen("B17DCPT163.bin","rb+");
	fseek(outfile,sizeof(product)*(n-1),SEEK_SET);
	product s;
	s.nums = n;
	flush;
	gets(s.name);
	scanf("%f %d",&s.price,&s.importYear);
	fwrite(&s,sizeof(s),1,outfile);
}

void sort(){
	int n = count();
	for(int i=0 ; i<n-1 ; i++){
		for(int j=i+1 ; j<n ; j++){
			if(ss[i].price < ss[j].price){
				product s = ss[i];
				ss[i] = ss[j];
				ss[j] = s;
			}
		}	
	}
}

void display(){
	FILE *outfile = fopen("B17DCPT163.bin","rb");
	int n = count();
	int c = 0;
	
	for(int i=0 ; i<n ; i++){
		fseek(outfile,sizeof(product)*i,SEEK_SET);
		fread(&ss[i],sizeof(product),1,outfile);
	}
	sort();
	for(int i=0 ; i<n ; i++){
		printf("%d %s",ss[i].nums,ss[i].name);
		printf(" %.1f %d",ss[i].price, ss[i].importYear);
		printf("\n");
	}
	fclose(outfile);
}

int main(){
//	FILE *outfile = fopen("B17DCPT163.bin","wb+");
//	fclose(outfile);
	int n ;
    scanf("%d", &n);
    switch (n) {
    case 1 :
        scanf("%d", &n) ;
        addnew(n) ;
        printf("%d",n) ;
        break ;
    case 2 :
        scanf("%d",&n);
        edit(n) ;
        printf("%d",n) ;
        break ;
    case 3 :
        display() ;
        break ;
    default :
        printf("") ;
    }
    return 0;
}
