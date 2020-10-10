//#include <???.h> //Author by Quan dep trai
#include <string.h>

int main(){
	char c[50];
	gets(c);
	bool test;
	int mark;
		
	for(int i=strlen(c) ; i>=0 ; i--){
		
		if(c[i]=='\0' && c[i-1] != ' '){
			for(int j=i-1 ; j>=0 ; j--){
				if(c[j] ==' ' && c[j+1] != ' '){
					for(int k=j+1 ; k<i ; k++){
						strlwr(&c[k]);
					}
					mark=j;
					break;
				}
			}
		}
	}
	
	for(int i=0 ; i<=mark ; i++){
		if(c[i] == ' ' && c[i-1] != ' ' ){
			for(int j=i-1 ; j>=0 ; j--){
				if(c[j-1] ==' ' || j==0){
					strlwr(&c[j]);
					printf("%c",c[j]);	
					break;	
				}
			}
		}					
	}
	
	for(int i=mark+1 ; i<strlen(c) ; i++){
		printf("%c",c[i]);
	}
	printf("@ptit.edu.vn");
	
	
	return 0;
}
	

