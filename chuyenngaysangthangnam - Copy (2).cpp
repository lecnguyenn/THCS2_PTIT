#include<stdio.h>
#include<conio.h>
int main(){
	int d;
	scanf("%d",&d);
	int y = d/365;
	int w = (d-y*365)/7;
	int n = (d - y*365)-w*7;
	
	printf("%d %d %d",y,w,n);
	
}
