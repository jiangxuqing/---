#include <stdio.h> 
#define PI 3.1415926 
int main()  
{ 
    float r,s;  
    printf("请输入圆半径：");  
    scanf("%f",&r);   
    s = PI * r * r;
	printf("圆周率为：%.7f 圆半径为：%f\n",PI,r);
    printf("圆面积为：%4.2f\n",s);    
    return 0;  
} 
