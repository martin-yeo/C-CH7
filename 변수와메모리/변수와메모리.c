#include <stdio.h>

int main(void) {
	int ö�� = 1;
	int ���� = 2;
	int �μ� = 3;
	int cool[10] = { 1, };

	printf("ö���� �ּ�: %p, ��ȣ : %d\n", &ö��, ö��);
	printf("����� �ּ�: %p, ��ȣ : %d\n", &����, ����);
	printf("�μ��� �ּ�: %p, ��ȣ : %d\n", &�μ�, �μ�);

	for (int i = 0; i < 10; i++)	{
		printf("cool[%d] �ּ�: %p, ��ȣ : %d\n", i, &cool[i], cool[i]);
	}

	printf("%d %d", sizeof(int), sizeof(long long));

	return 0;
}