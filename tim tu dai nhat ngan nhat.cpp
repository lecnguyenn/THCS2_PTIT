#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char s[50];
	gets(s);
	char max[10]="",min[10]="",temp[50]="";
	int ddt=0;
	for(int i=0;i<strlen(s);i++){
		if(s[i] ==' ' && isalpha(s[i-1])){
			strncat(max,s+ddt,i-ddt);
			strncat(min,s+ddt,i-ddt);
			ddt=i+1;
			break;
		}
	}
	for(int i=ddt;i<=strlen(s);i++){
		if(s[i]==' '||s[i]=='\0' && s[i-1] !=' '){
				if(strlen(max) < i-ddt){
					strcpy(max,temp);
					strncat(max,s+ddt,i-ddt);
				}
				if(strlen(min)>i-ddt){
					strcpy(min,temp);
					strncat(min,s+ddt,i-ddt);
				}
		}
		if(s[i] == ' ' && s[i+1] !=' '){
			ddt=i+1;
		}
	}
	printf(max);printf(" ");puts(min);
}
