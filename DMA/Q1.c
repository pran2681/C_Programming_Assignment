///Finding maximum and minimum number in an array using dynamic memory allocation

#include<stdio.h>
int main(){
   int *p,n,i,max=-32768,min=32767;
   printf("\n enter size:");
   scanf("%d",&n);
   p=(int*)malloc(n*sizeof(int)); //dynamic memory allocation
   printf("\n enter elements:");
   for(i=0;i<n;i++){
      scanf("%d",p+i);
      if(*(p+i)>max) //finding max element
         max=*(p+i);
      if(*(p+i)<min) //finding min element
         min=*(p+i);
   }
   printf("\n maximum=%d\n minimum=%d",max,min);
   free(p);
}