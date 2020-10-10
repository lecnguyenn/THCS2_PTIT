#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[100],so=0,c=0,kt=0,i;
	gets(s);

	for(int i=0;i<strlen(s);i++){
		if(s[i] >='a' && s[i]<= 'z' || s[i] >='A' && s[i] <='Z'){
			c++;
		}
		else if(s[i] >='0' && s[i] <='9'){
			so++;
		}
		else{
			kt++;
		}
	}
	printf("%d %d %d",so,c,kt);
}
