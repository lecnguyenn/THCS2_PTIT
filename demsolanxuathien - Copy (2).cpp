#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int k;
	char s[100];
	gets(s);
	for(int i=0;s[i]!='\0';i++){
		k=1;
		for(int j=i+1;s[j]!='\0';j++){
			if(s[i] == s[j]){
				k++;
			}
		}
		printf("%c %d\n",s[i],k);
		
	}
}
