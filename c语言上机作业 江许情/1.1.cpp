#include <stdio.h> 
#define PI 3.1415926 
int main()  
{ 
    float r,s;  
    printf("������Բ�뾶��");  
    scanf("%f",&r);   
    s = PI * r * r;
	printf("Բ����Ϊ��%.7f Բ�뾶Ϊ��%f\n",PI,r);
    printf("Բ���Ϊ��%4.2f\n",s);    
    return 0;  
} 
