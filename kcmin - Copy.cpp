#include<stdio.h>
#include<conio.h>
#include<math.h>
#include <stdlib.h>
void Nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void Swap(int &a,int &b){
	int temp=a;
		a=b;
		b= temp;
}
void  Sapxep(int a[],int n){
	for(int i=n-1;i>0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				Swap(a[j],a[j+1]);
			}
		}
	}
}
int check(int n,int a[]){
	Sapxep(a,n);
	if(n<2) return 0;
	int min = abs(a[0]-a[1]);
	for(int i=0;i<n;i++){
		int temp = abs(a[i]-a[i+1]);
		if(min > temp){
			min = temp;
		}
	}
	return min;
}
void In(int a[],int n){
	for(int i=0;i<n;i++){
		int result = abs(a[i]-a[i+1]);
		if( result == check(n,a)){
			printf("%d %d",a[i],a[i+1]);
			break;
		}
	}
}
int main(){
	int n,a[100000];
	scanf("%d",&n);
	Nhap(a,n);
	
	printf("%d ",check(n,a));
	In(a,n);
}
