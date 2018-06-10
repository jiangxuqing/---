#include <stdio.h>
int main()
{
    double lr; 
    double jj; 
    double d1, d2, d3, d4, d5; 
    int c; 
    printf("请输入利润：");
    scanf("%lf", &lr);
    d1 = 100000 * 0.1;
    d2 = d1 + 100000 * 0.075;
    d3 = d2 + 200000* 0.05;
    d4 = d3 + 200000 * 0.03;
    d5 = d4 + 400000 * 0.015;
    c=lr/100000;
    if(c>100000)
        c=100000;

    switch(c)
    {
    case 0:
        jj = lr * 0.1; break;
    case 1:
        jj = d1 + (lr-100000)*0.075; break;
    case 2:
    case 3:
        jj = d2 + (lr-200000)*0.05; break;
    case 4:
    case 5:
        jj = d3 + (lr-400000)*0.03;
    case 6:
    case 7:
    case 8:
    case 9:
        jj = d4 + (lr-400000)*0.015;
    case 10:
        jj = d5 + (lr-1000000)*0.01;
    }
       
    printf("利润为%f,应发奖金为：%f\n",lr,jj);
    return(0);
}