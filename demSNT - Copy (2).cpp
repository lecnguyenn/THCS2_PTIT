#include<stdio.h>
#include<conio.h>
#include<math.h>
int check(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i == 0) return 0;
	}
	return 1;
}
void nhap(int n,int a[]){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int n,a[100],dem=0;
	scanf("%d ",&n);
	nhap(n,a);
	for(int i=0;i<n;i++){
	
		if(check(a[i])){
			 dem++;
}
	}
	printf("%d",dem);
	for(int i=0;i<n;i++){
	if(check(a[i])){
			printf("%3d",a[i]);
		}
	}
	
}
