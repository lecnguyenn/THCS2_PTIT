//#include <???.h> //Author by Quan dep trai
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

bool isPrime(int n){
	if(n<2)
		return false;
	for(int i=2 ; i*i<=n ; i++){
		if(n%i==0)
			return false;
	}
	return true;
}

void check(int x[][10],int n, int m=0){
	if(m == 0)
		m = n;
	int count =0,store[n*m];
	bool test;
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			if(isPrime(x[i][j])==true && i==j){
				test=true;
				for(int k=0 ; k<count ; k++){
					if(x[i][j] == store[k])
						test =false;
				}
				if(test ==true)
					store[count++] = x[i][j];
			}
			
			if(isPrime(x[i][j])==true && j==n-i-1){
				test=true;
				for(int k=0 ; k<count ; k++){
					if(x[i][j] == store[k])
						test =false;
				}
				if(test ==true)
					store[count++] = x[i][j];
			}			
		}
	}
	printf("%d",count);
	
}

int main(){
	int x[10][10],n;
	scanf("%d",&n);
	in(x,n);
	check(x,n);
	
	
	return 0;
}
