#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[100][100],hang,cot,gt,n,d;
int Finaboci(int n){
	int f0=1,f1=1,fn;
	 if(n==1 || n==2) return 1;
	else{
		for(int i=3;i<=n;i++)
		{
			fn= f0+f1;
			f0=f1;
			f1=fn;
		}
	}
	return fn;	
}
void Tao_MT(){
	d=0,hang=n-1,cot=n-1,gt=0;
	while(d<=n/2){
	for(int i=d;i<=cot;i++) a[d][i]=Finaboci(gt++);
	for(int i=d+1;i<=hang;i++) a[i][cot] = Finaboci(gt++);
	for(int i=cot-1;i>=d;i--) a[hang][i] = Finaboci(gt++);
	for(int i=hang-1;i>d;i--) a[i][d] = Finaboci(gt++);
	d++;hang--;cot--;
	}
}
void xuat(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	scanf("%d",&n);
	Tao_MT();
	xuat();
}
