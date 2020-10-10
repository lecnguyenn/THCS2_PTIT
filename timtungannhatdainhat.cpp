#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char s[100],s1[15][25];
	int j=0,k=0;
	int max,min,len[15];
	gets(s);
	for(int i=0;s[i]!='\0';i++){
		if(s[i] == 32) {
			s1[k][j]='\0';
			k++;
			j=0;
		}
		else{
			s1[k][j] = s[i];
			j++;
		}
	}
	s1[k][j] ='\0';
	for(int i=0;i<k;i++){
		len[i] = strlen(s1[i]);
	}
	max= len[0];
	min= len[0];
	for(int i=0;i<=k;i++){
		if(max < len[i])
		max= len[i];
		if(min>len[i])
		min=len[i];
	}
//	for(int i=0;i<=k;i++){
//		if(strlen(s1[i])== max){
//			printf("%s \n",s1[i]);
//		}
//		
//	}
	for(int i=0;i<=k;i++){
		if(strlen(s1[i]) == min){
			printf("%s \n",s1[i]);
		}
	}
}
