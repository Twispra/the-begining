#include <stdio.h>
int main(void)
{
	double miaoshu = 3.156e7;
	int nianling;
	
	printf("你今年多少岁了？\n");
	scanf("%d",&nianling);
	printf("你现在%d岁也其实是活了%.1lf秒",nianling,nianling*miaoshu);
	
	return 0;
}

