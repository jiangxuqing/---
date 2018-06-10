#include <stdio.h>
int main()
{
int a[4],i,j; 
printf("请输入四个整数\n");
for(i=0;i<4;i++)
scanf("%d",&a[i]); 
for(i=0;i<4;i++)
for(j=i+1;j<4;j++)
{
int min;
if(a[i]>a[j])
{
min=a[i];
a[i]=a[j];
a[j]=min;
}
}
for(i=0;i<4;i++)
printf("%d\n",a[i]);
	return 0;
}
