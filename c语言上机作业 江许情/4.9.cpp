#include <stdio.h>
int main()
{
	int num,n,a,b,c,d,e;
	printf("������һ����������λ����������");
	scanf("%d",&num);
	if(num>9999) n=5;
	else if(num>999) n=4;
	else if(num>99) n=3;
	else if(num>9) n=2;
	else n=1;
	printf("������Ϊ%dλ��������\n",n);
	printf("�����λ����ʼ��ÿλ��������Ϊ��\n");
	a=num/10000;
	b=(num-a*10000)/1000;
	c=(num-a*10000-b*1000)/100;
	d=(num-a*10000-b*1000-c*100)/10;
	e=(num-a*10000-b*1000-c*100-d*10)/1;
	switch(n)
	{
	case 5:
	{
	printf("%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
	printf("�������Ϊ��%d%d%d%d%d\n",e,d,c,b,a);
	 } 
	 break;
	case 4:
	{
	printf("%d\n%d\n%d\n%d\n",b,c,d,e);
	printf("�������Ϊ��%d%d%d%d\n",e,d,c,b);
	 } 
	 break;
	 case 3:
	{
	printf("%d\n%d\n%d\n",c,d,e);
	printf("�������Ϊ��%d%d%d\n",e,d,c);
	 } 
	 break;
	 case 2:
	{
	printf("%d\n%d\n",d,e);
	printf("�������Ϊ��%d%d\n",e,d);
	 } 
	 break;
	 case 1:
	{
	printf("%d\n",e);
	printf("�������Ϊ��%d\n",e);
	 } 
	 break;
}
	return 0;
}
