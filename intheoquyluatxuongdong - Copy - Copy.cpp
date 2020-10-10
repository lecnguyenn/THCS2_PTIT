#include<stdio.h>
#include<conio.h>
int main(){
	int n,t=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",t);
			t++;
		}
		printf("\n");
	}
}
