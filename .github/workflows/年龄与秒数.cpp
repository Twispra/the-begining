#include <stdio.h>
int main(void)
{
	double miaoshu = 3.156e7;
	int nianling;
	
	printf("�����������ˣ�\n");
	scanf("%d",&nianling);
	printf("������%d��Ҳ��ʵ�ǻ���%.1lf��",nianling,nianling*miaoshu);
	
	return 0;
}

