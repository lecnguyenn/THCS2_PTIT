#include<stdio.h>
#include<conio.h>
bool check(int a[],int vt,int x){
	for(int i=0;i<vt;i++){
		if(a[i] == x) return false;
	}
	return true;
}
int dem(int a[],int n,int x){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i] == x) dem++;
	}
	return dem;
}
int main(){
	int n,count=0,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
		for(int i=0;i<n;i++){
		if(check(a,i,a[i])){
			if(dem(a,n,a[i])==1){
				count++;
			}
		}
	}
	printf("%d\n",count);
	for(int i=0;i<n;i++){
		if(check(a,i,a[i])){
			if(dem(a,n,a[i])==1){
				printf("%d ",a[i]);
			}
		}
	}
}
