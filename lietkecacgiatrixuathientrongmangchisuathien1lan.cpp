#include<stdio.h>
#include<conio.h>
bool check(int a[],int vt,int x ){
	for(int i=0;i<vt;i++){
		if(a[i] == x) return true;
	}
	return false;
}
int Count(int a[],int n,int x){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i] == x) count++;
	}
	return count;
}
int main(){
	int n,a[100],dem=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(!check(a,i,a[i])){
			if(Count(a,n,a[i]) == 1){
				printf("%d ",a[i]);
				dem++;
		}
		}
	}
	if(dem<1){
		printf("0");
	}

}
