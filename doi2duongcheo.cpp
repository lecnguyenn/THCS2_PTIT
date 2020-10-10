#include<stdio.h>
#include<conio.h>
void nhap(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void xuat(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
}
void swap(int &a,int &b){
	int temp = a;
		a = b;
		b= temp;
}
int main(){
	int n,a[100][100];
	scanf("%d",&n);
	nhap(a,n);
	for(int i=0;i<n;i++){
			swap(a[i][i],a[i][n-i-1]);	
	}
	xuat(a,n);
}
