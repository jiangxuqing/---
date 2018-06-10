#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float a,b;
printf("请输入一个小于1000的正数：\n"); 
scanf("%f",&a);
if (a>=1000) 
{
printf("请重新输入\n");
}
else
{
b=sqrt(a);
printf("%2.0f\n",b);
}
return 0;
}
