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
	int  i,opcao, digitado, digitado2;
	file=fopen("Senha.txt","rb");
	fread(&conteudo, sizeof(char),100,file);
	fclose(file);
    printf("\t*MENU*\n");
    printf("1-Troca de senha\n");
    printf("2-Sair");
    printf("\n\nDigite sua op��o: ");
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
			switch(senha3[1])
    {
    case'a':
    file=fopen("Senha.txt","w+");
    fprintf(file,"g9d6xvwb");
    fclose(file);
        break;
    case'b':
            file=fopen("Senha.txt","w+");
     fprintf(file,"b26dv3df");
     fclose(file);
        break;
    case'c':
            file=fopen("Senha.txt","w+");
     fprintf(file,"fneub5cb");
     fclose(file);
        break;
    case'd':
            file=fopen("Senha.txt","w+");
     fprintf(file,"najudb4u");
     fclose(file);
        break;
    case'e':
            file=fopen("Senha.txt","w+");
     fprintf(file,"neudevq4");
     fclose(file);
        break;
    case'f':
            file=fopen("Senha.txt","w+");
     fprintf(file,"jtyrdn6y");
     fclose(file);
        break;
    case'g':
            file=fopen("Senha.txt","w+");
     fprintf(file,"hdyfi84b");
     fclose(file);
        break;
    case'h':
            file=fopen("Senha.txt","w+");
     fprintf(file,"daejebro");
     fclose(file);
        break;
    case'i':
            file=fopen("Senha.txt","w+");
     fprintf(file,"laegrth2");
     fclose(file);
        break;
    case'j':
            file=fopen("Senha.txt","w+");
     fprintf(file,"jqceub4k");
     fclose(file);
        break;
    case'k':
            file=fopen("Senha.txt","w+");
     fprintf(file,"nqrefir3");
     fclose(file);
        break;
    case'l':
            file=fopen("Senha.txt","w+");
     fprintf(file,"dmqbuer4");
     fclose(file);
        break;
    case'm':
            file=fopen("Senha.txt","w+");
     fprintf(file,"awecetvt");
     fclose(file);
        break;
    case'n':
            file=fopen("Senha.txt","w+");
     fprintf(file,"aecrgy3n");
     fclose(file);
        break;
    case'o':
            file=fopen("Senha.txt","w+");
    fprintf(file,"pbjufbhf");
     fclose(file);
        break;
    case'p':
            file=fopen("Senha.txt","w+");
    fprintf(file,"aferyfbt");
     fclose(file);
        break;
    case'q':
            file=fopen("Senha.txt","w+");
    fprintf(file,"qyv59agv");
     fclose(file);
        break;
    case'r':
            file=fopen("Senha.txt","w+");
    fprintf(file,"ouev8v33");
     fclose(file);
        break;
    case's':
            file=fopen("Senha.txt","w+");
    fprintf(file,"qtev4956");
     fclose(file);
        break;
    case't':
            file=fopen("Senha.txt","w+");
    fprintf(file,"had4j45u");
     fclose(file);
        break;
    case'u':
            file=fopen("Senha.txt","w+");
    fprintf(file,"kai9qnfj");
     fclose(file);
        break;
    case'v':
            file=fopen("Senha.txt","w+");
   fprintf(file,"pklaf9nd");
     fclose(file);
        break;
    case'w':
            file=fopen("Senha.txt","w+");
    fprintf(file,"lrt1b4f1");
     fclose(file);
        break;
    case'x':
            file=fopen("Senha.txt","w+");
    fprintf(file,"yafe3bry");
     fclose(file);
        break;
    case'y':
            file=fopen("Senha.txt","w+");
     fprintf(file,"kaurbyf4");
     fclose(file);
        break;
    case'z':
            file=fopen("Senha.txt","w+");
    fprintf(file,"tbubsgv6");
     fclose(file);
        break;
        default:
        break;
        }
for(i=1;i<=100;i++)
{
switch(senha3[i])
    {
    case'a':
    file=fopen("Senha.txt","a");
    fprintf(file,"g9d6xvwb");
    fclose(file);
        break;
    case'b':
            file=fopen("Senha.txt","a");
     fprintf(file,"b26dv3df");
     fclose(file);
        break;
    case'c':
            file=fopen("Senha.txt","a");
     fprintf(file,"fneub5cb");
     fclose(file);
        break;
    case'd':
            file=fopen("Senha.txt","a");
     fprintf(file,"najudb4u");
     fclose(file);
        break;
    case'e':
            file=fopen("Senha.txt","a");
     fprintf(file,"neudevq4");
     fclose(file);
        break;
    case'f':
            file=fopen("Senha.txt","a");
     fprintf(file,"jtyrdn6y");
     fclose(file);
        break;
    case'g':
            file=fopen("Senha.txt","a");
     fprintf(file,"hdyfi84b");
     fclose(file);
        break;
    case'h':
            file=fopen("Senha.txt","a");
     fprintf(file,"daejebro");
     fclose(file);
        break;
    case'i':
            file=fopen("Senha.txt","a");
     fprintf(file,"laegrth2");
     fclose(file);
        break;
    case'j':
            file=fopen("Senha.txt","a");
     fprintf(file,"jqceub4k");
     fclose(file);
        break;
    case'k':
            file=fopen("Senha.txt","a");
     fprintf(file,"nqrefir3");
     fclose(file);
        break;
    case'l':
            file=fopen("Senha.txt","a");
     fprintf(file,"dmqbuer4");
     fclose(file);
        break;
    case'm':
            file=fopen("Senha.txt","a");
     fprintf(file,"awecetvt");
     fclose(file);
        break;
    case'n':
            file=fopen("Senha.txt","a");
     fprintf(file,"aecrgy3n");
     fclose(file);
        break;
    case'o':
            file=fopen("Senha.txt","a");
    fprintf(file,"pbjufbhf");
     fclose(file);
        break;
    case'p':
            file=fopen("Senha.txt","a");
    fprintf(file,"aferyfbt");
     fclose(file);
        break;
    case'q':
            file=fopen("Senha.txt","a");
    fprintf(file,"qyv59agv");
     fclose(file);
        break;
    case'r':
            file=fopen("Senha.txt","a");
    fprintf(file,"ouev8v33");
     fclose(file);
        break;
    case's':
            file=fopen("Senha.txt","a");
    fprintf(file,"qtev4956");
     fclose(file);
        break;
    case't':
            file=fopen("Senha.txt","a");
    fprintf(file,"had4j45u");
     fclose(file);
        break;
    case'u':
            file=fopen("Senha.txt","a");
    fprintf(file,"kai9qnfj");
     fclose(file);
        break;
    case'v':
            file=fopen("Senha.txt","a");
   fprintf(file,"pklaf9nd");
     fclose(file);
        break;
    case'w':
            file=fopen("Senha.txt","a");
    fprintf(file,"lrt1b4f1");
     fclose(file);
        break;
    case'x':
            file=fopen("Senha.txt","a");
     fprintf(file,"yafe3bry");
     fclose(file);
        break;
    case'y':
            file=fopen("Senha.txt","a");
     fprintf(file,"kaurbyf4");
     fclose(file);
        break;
    case'z':
            file=fopen("Senha.txt","a");
    fprintf(file,"tbubsgv6");
     fclose(file);
        break;
        default:
        break;
        }
}
        	printf("\n\tSENHA ALTERADA\n");system("color 0a");
			Beep(700,1000);
        	system("pause");
        	system("cls");
        	system("color 07");
    	}
    	else
    	{
    		system("cls");
    		printf("Senha Inv�lida\n");system("color 0c");
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
