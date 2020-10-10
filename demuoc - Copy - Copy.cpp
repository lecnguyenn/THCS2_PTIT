#include <stdio.h>

int main()

{

            int i,in,idem=0;

            printf("Nhap vao so nguyen: ");

            scanf("%d",&in);

            printf("Cac uoc so la: ");

            for(i=1;i<=in;i++)

                if(in%i == 0)

                {

                   printf("%d, ",i);

                    idem++;

               }

    printf("\nSo uoc so la %d",idem);

}
