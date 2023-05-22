#include <stdio.h>

int main(void) {
	int Ã¶¼ö = 1;
	int ¿µÈñ = 2;
	int ¹Î¼ö = 3;
	int cool[10] = { 1, };

	printf("Ã¶¼ö³× ÁÖ¼Ò: %p, ¾ÏÈ£ : %d\n", &Ã¶¼ö, Ã¶¼ö);
	printf("¿µÈñ³× ÁÖ¼Ò: %p, ¾ÏÈ£ : %d\n", &¿µÈñ, ¿µÈñ);
	printf("¹Î¼ö³× ÁÖ¼Ò: %p, ¾ÏÈ£ : %d\n", &¹Î¼ö, ¹Î¼ö);

	for (int i = 0; i < 10; i++)	{
		printf("cool[%d] ÁÖ¼Ò: %p, ¾ÏÈ£ : %d\n", i, &cool[i], cool[i]);
	}

	printf("%d %d", sizeof(int), sizeof(long long));

	return 0;
}