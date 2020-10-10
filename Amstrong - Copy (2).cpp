#include<stdio.h>
#include<conio.h>
#include<math.h>

int dem(int n){
	int cout = 0;
	while(n>0){
		n/=10;
		++cout;
	}
	return cout;
}
long check(int n){
	int temp = n,sum = 0,t;
	int lt = dem(n);
	while(temp>0){
		t=temp%10;
		temp/=10;
		sum += pow(t,lt);
	}
	if(sum == n) return true;
			return false;
}
int main(){
	int a,b,min,max;
	int dem = 0;
	do{
	scanf("%d %d",&a,&b);
	}	while(a<=0 ||b<=0);
	if(a>b){
		max=a;
		min=b;
	}
	if(a<b){
		max=b;
		min=a;
	}
	for(long i=min;i<=max;i++){
		if(check(i) == true){
			dem++;
			printf("%d ",i);
		}
	}
	if(dem == 0){
		printf("0");
	}
}
