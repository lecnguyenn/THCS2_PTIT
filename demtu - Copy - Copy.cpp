#include<stdio.h>
#include<conio.h>
#include<string.h>

int  dem(char *s){
	int dem= 0;
	if(s[0] != ' '){
		dem=1;
	}
	for(int i=0;i<strlen(s);i++){
		if(s[i] == ' '&& s[i+1] !=' ')
		dem++;
	}
	return dem;
}
int main(){
	char s[100];
	gets(s);
	int result = dem(s);
	printf("%d",result);
}
