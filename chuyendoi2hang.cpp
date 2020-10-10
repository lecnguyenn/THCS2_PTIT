#include<stdio.h>
#include<conio.h>
void nhap(int a[][100],int m,int n){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void swap(int &a,int &b){
	int temp= a;
	 	a= b;
	 	b= temp;
}
void xuat(int a[][100],int m,int n){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int m,n,a[100][100],k,p;
	scanf("%d %d",&m,&n);
	nhap(a,m,n);
	scanf("%d %d",&k,&p);
	for(int j=1;j<=n;j++){
		swap(a[k][j],a[p][j]);
	}
	xuat(a,m,n);
}
