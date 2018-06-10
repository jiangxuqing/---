#include <stdio.h>
int main()
{
	int M,N;
	printf("请输入高度以及落地次数：");
	scanf("%d %d",&M,&N);
	double s=M,h=s/2.0;
	float n;
	for(n=2.0;n<=N;n++)
	{
		s=s+2.0*h;
		h=h/2.0;
	}
	printf("反弹高度：%3.2f 经过%3.2f米\n",h,s);
	return 0;
}
