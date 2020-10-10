#include<stdio.h>
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	for(int i=0;i<strlen(s);i++){
		if(s[i] ==' '){
			continue;
		}
		printf("%c",s[i]);
	}
}
