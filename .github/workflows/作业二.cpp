#include <stdio.h>
int main(void)
{
	 double cs = 32.1415926;//超过小数后六位会四舍五入 
	
	printf("Enter a floating-point value:%lf\n",cs);
	printf("fixed-point notation:%Lf\n",cs);
	printf("expomedtial notation:%Le\n",cs);
	printf("p notation:%la\n",cs);
	
	return 0;
}
