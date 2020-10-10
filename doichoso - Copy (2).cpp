#include<stdio.h>
#include<conio.h>
int main(){
	int n,dao;
	scanf("%d",&n);
	whike(n>0){
		dao = dao*10 + n*10;
		n/=10;
	}
	printf("%d",dao);
}
