#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
char conteudo[100];
void Menu()
{
	setlocale(LC_ALL,"portuguese");
	FILE *file;
	char senha[100],senha2[100],senha3[100];
	int  opcao, digitado, digitado2;
	file=fopen("Senha.txt","rb");
	fread(&conteudo, sizeof(char),100,file);
	fclose(file);
    printf("\t*MENU*\n");
    printf("1-Troca de senha\n");
    printf("2-Sair");
    printf("\n\nDigite sua opção: ");
    scanf("%d",&opcao);
    system("cls");
    switch(opcao)
    {
        case 1:
		printf("Digite a senha antiga: ");
		fflush(stdin);
    	gets(senha2);
        if (strcmp (senha2, conteudo) == 0)
    	{
        	printf("Digite sua nova senha: ");
        	gets(senha3);
        	file=fopen("Senha.txt","w+");
        	fprintf(file,"%s",senha3);
        	fclose(file);
        	printf("\n\tSENHA ALTERADA\n");system("color 0a");
			Beep(700,1000);
        	system("pause");
        	system("cls");
        	system("color 07");
    	}
    	else
    	{
    		system("cls");
    		printf("Senha Inválida\n");system("color 0c");
        	Beep(1500,500);
        	system("pause");
        	system("cls");
        	system("color 07");
		}
		Menu();
        	break;
        	case 2:
        	exit(0);
        	break;
    }
}

int main()
{
	setlocale(LC_ALL,"portuguese");
	FILE *file;
	char senha[100];
	int digitado, flag=0, cont=0;
	file=fopen("Senha.txt","rb");
	fread(&conteudo, sizeof(char),100,file);
	fclose(file);
    do 
    {
    	if(cont>=1)
    	{
    		Beep(1200,200);
		}
        printf("Digite a senha: ");
        gets(senha);
        if (strcmp (senha, conteudo) == 0)
        {
            flag=1;
        }
        cont++;
    }while((flag==0) && (cont<3));
    system("cls");
    if(flag==1)
    {
        printf("Logado com sucesso!\n\n");system("color 0a");
        Beep(400,1000);
        system("pause");
        system("cls");
        system("color 07");
        Menu();
    }
    if((cont==3) && (flag==0))
    {
        printf("Numero de tentativas exedido\n");system("color 0c");
        Beep(1500,500);
        system("pause");
    }
}
