#include<stdio.h>
#include<conio.h>
int main(){
	int a[100],b[100],j,n;
	scanf("%d",&n);
	while(n>0){
		a[j] = n%10;
		j++;
		n/=10;
	}
	for(int i=0;i<j;i++){
		b[0] = a[0];
		b[i+1] = a[j-1];
		j--;
		b[j-1] = a[j-1];
	}
	for(int i=0;i<j;i++){
		printf("%d",b[i]);
	}
}
