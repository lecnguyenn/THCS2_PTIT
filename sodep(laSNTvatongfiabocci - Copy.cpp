#include<stdio.h>
#include<conio.h>
#include<math.h>
int Finaboci(int n){
	int f0=0,f1=1,fn=1;
	if( n==0 || n==1) return n;
	if(n<0) return -1;
	for(int i=2;i<n;i++){
		f0=f1;
		f1=fn;
		fn=f0+f1;
	}
	return fn;
}
bool check(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	int i=0;
	while(sum > Finaboci(i)){
		++i;
	}
	if(sum == Finaboci(i)) return 1;
	return 0;
}
bool SNT(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int a,b,min,max;
	scanf("%d %d",&a,&b);
	if(a<b){
		min=a;max=b;
	}
	else{
		max =a;min=b;
	}
	for(int i=min;i<=max;i++){
		if(SNT(i) && check(i)){
			printf("%d ",i);
		}
	}
}
