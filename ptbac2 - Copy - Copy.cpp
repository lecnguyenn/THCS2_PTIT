#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
		float a,b,c,x1,x2,denta;
		scanf("%f %f %f",&a,&b,&c);
		denta = b*b-4*a*c;
		if(denta < 0){
			printf("NO");
		}
		else if(denta == 0){
		x1 =x2 = -b/(2*a);
		printf("%.2f",x1);
		}
		else{
			x1 = (-b + sqrt(denta))/(2*a);
			x2 = (-b - sqrt(denta))/(2*a);
			printf("%.2f %.2f",x1,x2);
		}
		
}

