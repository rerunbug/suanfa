#include<stdio.h>
const int max = 999;
int main()
{
	for (int min = 100; min <= max; min++) {
		int a = min / 100;//�ٷ�λ
		int b = (min % 100) / 10;//ʮ��λ
		int c = min % 10;//����λ
		if ((a * a * a) + (b * b * b) + (c * c * c))printf("%d\n", min);
	}
	return 0;
}