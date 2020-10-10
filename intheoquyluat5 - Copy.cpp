#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int findMin(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=n;i>0;i--){
	 	for(int j=i+1;j<n*2-1;j++){
	 		printf("%d",findMin(abs(i-n),abs(j-n))+1);
		 }
		 printf("\n");
}
}
