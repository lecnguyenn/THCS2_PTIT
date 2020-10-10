#include<stdio.h>
#include<conio.h>

void nhap(int a[][100],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
int tong(int a[][100],int j,int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i][j];
	} 
	return sum;
}
int cot_min(int a[][100],int n){
	int min = tong(a,1,n);
	int c = 1;
	for(int j=1;j<=n;j++){
		if(min > tong(a,j,n)){
			min = tong(a,j,n);
			c = j;
		}
	}
	return c;
}
void IN_cot_min(int a[][100],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j == cot_min(a,n)){
				printf("%3d",a[i][j]);
			}
		}
	}
}
int main(){
	int n, a[100][100];
	scanf("%d",&n);
	nhap(a,n);
	printf("%d\n",cot_min(a,n));
	IN_cot_min(a,n);
}
