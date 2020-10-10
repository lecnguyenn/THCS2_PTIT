#include<stdio.h>
#include<conio.h>
void Nhap(int n,int a[][50]){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
int tong(int n,int j,int a[][50]){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i][j];
	}
	return sum;
}
int cot_max(int a[][50],int n){
	int max= tong(n,1,a);
	int c =1;
	for(int j=1;j<=n;j++){
		if(max <tong(n,j,a)){
			max = tong(n,j,a);
			c=j;
		}
	}
	return c;
	
}
void in_cot_max(int a[][50],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==cot_max(a,n)){
				printf("%3d",a[i][j]);
			}
		}
	}
}
int main(){
	int n,a[50][50];
	scanf("%d",&n);
	Nhap(n,a);
	printf("%d\n",(cot_max(a,n)));
	in_cot_max(a,n);	
}
