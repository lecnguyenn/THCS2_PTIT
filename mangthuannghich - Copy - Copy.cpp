//mang thuan nghich

#include<stdio.h>
#include<conio.h>
void Nhap(int &n,int a[]){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}	
}
bool check(int n,int a[]){
	for(int i=0;i<n/2;i++){
		if(a[i]  != a[n-i-1]) return 0;
	}
	return 1;
}
int main(){
	int n,a[100];
	Nhap(n,a);
	if(check(n,a) == 1){
		printf("\n1");
	}
		else{
			printf("\n0");
		}
	}
