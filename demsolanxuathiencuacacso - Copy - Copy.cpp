#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[100],count=0;
	gets(s);
	for(int i=0;i<strlen(s);i++){
		for(int j=0;j<10;j++){
			if(s[i] == s[j]){
				count++;
			}
		}
		printf("%c %d\n",s[i],count);
		count=0;
	}
}
