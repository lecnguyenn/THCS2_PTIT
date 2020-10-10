#include<conio.h>
#include<stdio.h>
#include<math.h>
void nhap(int a[][100],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
bool check(int n){
	if(n<2) return false;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return false;
	}
	return true;
}
int dem(int a[][100],int n){
	int dem =0,b[100];
	bool check_trung;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(check(a[i][j]) && i==j){
				check_trung = true;
					for(int t=0;t<dem;t++){
						if(a[i][j] == b[t])
						check_trung = false;
					}
					if(check_trung == true){
						b[dem++] = a[i][j];
					}
			}
			if(check(a[i][j]) && j==n-i-1 && j!=i){
				check_trung = true;
				for(int t=0;t<dem;t++){
					if(a[i][j] == b[t])
					check_trung = false;
				}
				if(check_trung == true){
					b[dem++] = a[i][j];
				}
			}
		}
	}
	return dem;
}
int main(){
	int n,a[100][100];
	scanf("%d",&n);
	nhap(a,n);
	printf("%d",dem(a,n));
}
