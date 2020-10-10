#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[100],p[100];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[strlen(s)-1]== '0'){
			p[0]=' ';
		}
		else{
		p[0] = s[strlen(s)-1];
	}
		p[i+1] = s[i+1];
		p[strlen(s)-1] = s[0];
		printf("%c",p[i]);
	}
	
}
