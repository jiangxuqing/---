 

#include "stdio.h"

#define Size 99

int main() 

{ 

 int a[Size],i,j; 

 for(i=0;i<Size;i++) 

  a[i]=i+2; 

 

 for(i=0;i<Size;i++)

 { 

      if(a[i]) 

      { 

       for(j=i+1;j<Size;j++) 

        if(a[j]%a[i]==0) 

         a[j]=0; 

      } 

 } 

 for(i=0;i<Size;i++) 

  if(a[i]!=0) 

   printf("%d\t",a[i]);

 printf("\n");

 return 0; 

}