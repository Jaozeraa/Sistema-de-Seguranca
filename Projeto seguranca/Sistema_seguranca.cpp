#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<windows.h>
void Menu()
{
	FILE *file;
	char conteudo[100];
	int  senha,opcao, digitado, digitado2;
	file=fopen("Senha.txt","rb");
	fread(&conteudo, sizeof(char),100,file);
	senha=conteudo[100];
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
    	scanf("%d",&digitado);
    	if(digitado==senha)
    	{
        	printf("Digite sua nova senha: ");
        	scanf("%d",&digitado2);
        	senha=digitado2;
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
	FILE *file;
	char conteudo[100];
	int senha, digitado, flag=0, cont=0;
	file=fopen("Senha.txt","rb");
	fread(&conteudo, sizeof(char),100,file);
	senha=conteudo[100];
	fclose(file);
    setlocale(LC_ALL,"portuguese");
    do 
    {
    	if(cont>=1)
    	{
    		Beep(1200,200);
		}
        printf("Digite a senha: ");
        scanf("%d",&digitado);
        if(digitado==senha)
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
