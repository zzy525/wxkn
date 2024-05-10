#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
    float sum(int a){
   	    int i;
   	        double b = 2,c = 1,d,sum = 0;
   	        for(i = 1;i<=a;i++){
   	     	sum+=b/c;
   	    	d=b;
   		    b=b+c;
   	    	c=d;
	   }
	   return sum;
   }
int main(int argc, char *argv[]) {
   int a;
   float sum(a);
   scanf("%d",&a);
   printf("%.2f",sum(a));
   }


