#include<stdio.h>
#include<conio.h>

int check(int n){
	int temp = n,dao = 0;
	while(temp>0){
		dao = dao*10 + temp%10;
		temp/=10;
	}
	if(dao == n) return 1;
	return 0;
}
void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int main(){
	int a[100],n,dem = 0;
	scanf("%d ",&n);
	nhap(a,n);
	for(int i=0;i<n;i++){
		if(check(a[i]) && a[i] >=10){
			dem++;
		}
	}
	printf("%d ",dem);
	for(int i=0;i<n;i++){ 
		if(check(a[i]) && a[i]>=10){
			printf("%3d ",a[i]);
		}
	}
}
