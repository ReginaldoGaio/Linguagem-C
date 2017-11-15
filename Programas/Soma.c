#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int a, b, soma = 0;

	printf("Informe o primeiro número: ");
	scanf("%d", &a);
	printf("Informe o segundo número: ");
	scanf("%d", &b);
	soma = a + b;
	printf("A soma dos números digitados é: %d\n", soma);

	return 0;
}
