#include<stdio.h>
#include<conio.h>
#include<math.h>

//int a[100][100],i,j,d,gt,hang,cot,n;
void tao_mt(int a[][100],int n){
	int d,hang,cot,m;
	d=0,hang=n-1,cot=n-1,m=n*n;
	while(d<=n/2){
		for(int i=d;i<=cot;i++) a[d][i]=m--;
		for(int i=d+1;i<=hang;i++) a[i][cot]=m--;
		for(int i=cot-1;i>=d;i--) a[hang][i] = m--;
		for(int i=hang-1;i>d;i--) a[i][d] = m--;
		d++;hang--;cot--;
	}
}
void xuat(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n, a[100][100];
	scanf("%d",&n);
	tao_mt(a,n);
	xuat(a,n);
}
