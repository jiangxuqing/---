#include<stdio.h>
int main()
{
char x;
int a,b,c,d;          //xΪ����ģ�aΪӢ����ĸ����bΪ��������cΪ�ո�����dΪ�����ַ���
a=0;b=0;c=0;d=0;
for(;(x=getchar())!='\n';)
{
if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
      a=a+1;  
  else if (x>='0'&&x<='9')
  b=b+1;
  else if(x==32)
  c=c+1;
else
      d=d+1;
}
printf("Ӣ����ĸ����%d\n��������%d\n�ո�����%d\n�����ַ�����%d",a,b,c,d);
} 