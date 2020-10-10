#include<stdio.h>
#include<conio.h>
bool check(int n){
	int temp = n,dao=0;
	while(n>0){
		dao = dao*10 + n%10;
		n/=10;
	}
	if(dao == temp) return true;
	return false;
}
int main(){
	int n;
	scanf("%d",&n);
	if(check(n)){
		printf("1");
	}
	else{
		printf("0");
	}
}
