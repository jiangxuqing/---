#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float a,b;
printf("������һ��С��1000��������\n"); 
scanf("%f",&a);
if (a>=1000) 
{
printf("����������\n");
}
else
{
b=sqrt(a);
printf("%2.0f\n",b);
}
return 0;
}
