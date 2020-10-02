#include<stdio.h>
void fibonacci(int n){
   int a=0,b=1,c,i;
   printf("fibonacci series till %d is ",n);
   printf("\n%d %d",a,b);//it will print 0 and 1
   for(i=2;i<n;++i) //loop starts from 2 because 0 and 1 are the fixed values that series will take{
      c=a+b;
      printf(" %d",c);
      a=b;
      b=c;
   }
}
int main(){
   int n=10;
   fibonacci(n);
   return 0;
}
