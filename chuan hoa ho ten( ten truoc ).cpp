#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[100];
	gets(s);
	int dd;
	for(int i=strlen(s);i>=0;i--){
		if(s[i] == '\0' && s[i-1] != ' '){
			for(int j=i-1;j>=0;j--){
				if(s[j] == ' ' && s[j+1]!= ' '){
					for(int k=j+1;k<i;k++){
						strupr(&s[k]);
						printf("%c",s[k]);
					}
					dd = j;
					break;
				}
			}
		}
	}
	printf(", ");
	for(int i=0;i<=dd ;i++){
		if(s[i] == ' '&& s[i-1] !=' '){
			for(int j= i-1;j>=0;j--){
				if(s[j-1] == ' '|| j==0){
					for(int k=j;k<i;k++){
						if(k==j){
							strupr(&s[k]);
							printf("%c",s[k]);
						}
						else{
							strlwr(&s[k]);
							printf("%c",s[k]);
						}
					}
					printf(" ");
					break;
				}
			}
		}
	}
	
}
