#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *file;
	char conteudo[100];
	file = fopen("Senha.txt","rb");
	fread(&conteudo, sizeof(char), 100, file);
	printf("%s",conteudo);
	fclose(file);
	system("pause");
	return 0;
}
