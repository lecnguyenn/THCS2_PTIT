//#include <???.h> //Author by Nguyen Le
#include<stdio.h>
#include<conio.h>
void in(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			scanf("%d",&x[i][j]);
		}
	}
}

void out(int x[][10],int n,int m=0){
	if(m == 0)
		m = n;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}

void delR(int x[][10],int &n,int m,int p){
	for(int i=p ; i<n-1 ; i++){
		for(int j=0 ; j<m ; j++){
			x[i][j] = x[i+1][j];
		}
	}
	n--;
}

void delC(int x[][10],int n,int &m,int p){
	for(int i=0 ; i<n ; i++){
		for(int j=p ; j<m-1 ; j++){
			x[i][j] = x[i][j+1];
		}
	}
	m--;
}


void check(int x[][10],int n, int m){
	if(m == 0)
		m=n;
	int sum=0,sumR,markR;
	for(int i=0 ; i<n ; i++){
		sumR=0;
		for(int j=0 ; j<m ; j++){
			sumR+=x[i][j];
		}
		if(sumR > sum){
			sum = sumR;
			markR =i;
		}		
	}
	
	int sumC,markC,sum1=0;
	for(int i=0 ; i<m ; i++){
		sumC=0;
		for(int j=0 ; j<n ; j++){
			sumC+=x[j][i];
		}
		if(sumC > sum1){
			sum1 = sumC;
			markC =i;
		}
	}
	delR(x,n,m,markR);
	delC(x,n,m,markC);
	out(x,n,m);
}

int main(){
	int x[10][10],n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	in(x,n,m);
	check(x,n,m);
	
	
	return 0;
}
