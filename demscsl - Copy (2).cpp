#include<stdio.h>
#include<conio.h>

int check_chan(int n){
	if(n%2 == 0) return 1;
	return 0;
}
int check_le(int n){
	if(n%2 != 0) return 1;
	return 0;
}
void nhap(int n,int a[]){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int n,a[100],sc=0,sl=0;
	scanf("%d",&n);
	nhap(n,a);
	for(int i=0;i<n;i++){
		if(check_chan(a[i])){
			sc++;
		}
	}
	printf("%d ",sc);
	for(int i=0;i<n;i++){
		if(check_chan(a[i])){
			printf("%3d",a[i]);
		}
	}
	
		for(int i=0;i<n;i++){
		if(check_le(a[i])){
			sl++;
		}
	}
	printf("\n%d ",sl);
	for(int i=0;i<n;i++){
		if(check_le(a[i])){
			printf("%3d",a[i]);
		}
	}
	
}
