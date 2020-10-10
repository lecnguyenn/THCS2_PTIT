#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[100];
	gets(s);
	bool flag=false;
	int dd,t;
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i] != ' '){
			flag= true;
		}
		if(flag == true){
			if(s[i] == ' ' && s[i-1] !=' '){
				dd= i;
				break;
			}
		}
	}
	for(int i=0;i<=dd ;i++){
		if(s[i] == ' '&& s[i-1] != ' '){
			t = i;
			for(int j=i-1;j>=0;j--){
				if(s[j-1] == ' ' || j==0){
					for(int p=j;p<i;p++){
						if(p==j){
							strupr(&s[p]);
							printf("%c",s[p]);
						}
						else{
							strlwr(&s[p]);
							printf("%c",s[p]);
						}
					}
					if(i<dd){
						printf(" ");
					}
					break;
				}
			}
		}
	}
	printf(", ");
	for(int i=strlen(s)-1;i>=0;i--){
		if(s[i] == ' ' && isalpha(s[i+1]) ){
			for(int p=i;p<=strlen(s)-1;p++){
				strupr(&s[p]);
				printf("%c",s[p]);
			}
			break;
		}
	}
}
