#include<stdio.h>
#include<conio.h>

void nhap(int a[],int n,int b[],int m ){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++){
		scanf("%d",&b[i]);
	}
}
void Add(int a[],int n,int b[],int m,int p){
	int c[n+m];
	for(int i=0;i<p;i++){
		c[i] = a[i];
	}
	for(int i=p;i<m+p;i++){
		c[i]=b[i-p];
	}
	for(int i=p+m;i<n+m;i++){
		c[i] = a[i-m];
	}
	for(int i=0;i<n+m;i++){
		printf("%3d",c[i]);
	}
}
int main(){
	int n,m,p;
	scanf("%d %d %d",&n,&m,&p);
	int a[n],b[m];
	nhap(a,n,b,m);
	Add(a,n,b,m,p);
}
