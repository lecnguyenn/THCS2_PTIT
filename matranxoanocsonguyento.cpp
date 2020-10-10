#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[100][100],i,j,n,d,gt,hang,cot;
int snt(int stt){
	int i=2,dem=0,flag;
	while(dem<stt){
	 flag =1;
	for(int j=2;j<i;j++){
		if(i%j==0){
			flag = 0;
			break;
		}	
	}
	if(flag == 1){
		dem++;
	}
	if(dem == stt){
		break;
	}
	i++;
	}
	return i;
}
void Creat(){
	d=0;hang=n-1;cot=n-1;gt=1;
	while(d<=n/2){
	for( i=d;i<=cot;i++)  a[d][i] =snt(gt++);
	for( i=d+1;i<=hang;i++) a[i][cot]=snt(gt++);
	for( i=cot-1;i>=d;i--)  a[hang][i]=snt(gt++);
	for( i=hang-1;i>d;i--)  a[i][d]=snt(gt++);
	d++;hang--;cot--;
	}	
}
void In(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
				printf("%3d",a[i][j]);
		}
		printf("\n");
		
	}
}
main(){
	scanf("%d",&n);
	Creat();
	In();
}
