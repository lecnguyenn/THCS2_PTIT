#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int cc=0,s=0,other=0;
	char str[100];
	gets(str);
	for(int i=0;i<strlen(str);i++){
		if((str[i]>='a' && str[i] <='z') || (str[i] >='A' && str[i] <='Z')){
			cc++;
		}
		else if(str[i]>='0' && str[i] <='9'){
			s++;
		}
		else{
			other++;
		}
	}
	printf("%d %d %d",cc,s,other);
}
