#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
}
