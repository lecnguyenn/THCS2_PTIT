#include<stdio.h>
#include<conio.h>
#include<math.h>
void nhap(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
bool check(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int dem(int a[][100],int n){
	int dem =0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			
			if(check(a[i][j]) && i==j){
				dem++;
			}
			if(check(a[i][j]) && j ==n-i-1 && i!=j){
				dem++;
			} 
		}
	}
	return dem;
}
int main(){
	int a[100][100],n;
	scanf("%d",&n);
	nhap(a,n);
	printf("%d",dem(a,n));
}
