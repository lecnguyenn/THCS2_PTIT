#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int n,a[100],cout[100],dem=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<100;i++){
		cout[i] = 0;
	}
	for(int j=0;j<n;j++){
		cout[a[j]]++;
	}
	for(int i=0;i<n;i++){
		if(cout[i]>=2){
			printf("%d ",i);
			dem++;
		}
	}
	if(dem<2){
		printf("0");
	}
	
}
