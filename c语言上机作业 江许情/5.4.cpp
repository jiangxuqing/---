#include<stdio.h>
int main()
{
char x;
int a,b,c,d;          //x为输入的，a为英文字母数，b为数字数，c为空格数，d为其他字符数
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
printf("英文字母数：%d\n数字数：%d\n空格数：%d\n其他字符数：%d",a,b,c,d);
} 