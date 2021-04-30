#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>

main ()
{
	int op2,n,op;
	char op1;
	float n1,n2,sn1,sn2,dn1,dn2,mn1,mn2,resultado1,resultado2,resultado3,tc,tk,tf;
	float formula_c,formula_f;
	do
	{
		system("cls");
		printf("MENU PRINCIPAL\n");
		printf("1. SUBMENU MATEMATICA    \n");
		printf("2. SUBMENU TEMPERATURA   \n");
		printf("3. Sair\n");
		printf("Digite a sua opcao ");
		scanf("%d",&op);
		switch(op)
	{
			
	case 1:
	{
		do
		{
			system("cls");
			printf("SUBMENU MATEMATICA\n");
			printf("a. adicao\n");
			printf("b. subtracao\n");
			printf("c. divisão\n");
			printf("d. multiplicação\n");
			printf("\n");
			printf("\n");
			printf("v. Voltar ao menu principal\n");
			printf("Digite a sua opcao ");
			op1=tolower(getche());
			
		switch(op1)
		{
		case 'a':
		{
			system("cls");
			printf("Digite o primeiro numero ");
			scanf("%f",&n1);
			printf("Digite o segundo numero ");
			scanf("%f",&n2);
			resultado1=n1+n2;
			printf("Valor da soma = %.2f\n",resultado1);
			getch();
			break;
		}
				
	case 'b' :
	{
		system("cls");
		printf("Digite o primeiro numero: ");
		scanf("%f",&sn1);
		printf("Digite o segundo numero: ");
		scanf("%f",&sn2);
		resultado1=sn1-sn2;
		printf("Valor da subtração = %.2f\n",resultado1);
		getch();
		break;	
	}
	
	case 'c' :
	{
		system("cls");
		printf("Digite o primeiro numero: ");
		scanf("%f",&dn1);
		printf("Digite o segundo numero: ");
		scanf("%f",&dn2);
		resultado2=dn1/dn2;
		printf("Valor da divisão = %.2f\n",resultado2);
		getch();
		break;	
	}
	
	case 'd' :
	{
		system("cls");
		printf("Digite o primeiro numero: ");
		scanf("%f",&mn1);
		printf("Digite o segundo numero: ");
		scanf("%f",&mn2);
		resultado3=mn1*mn2;
		printf("Valor da multiplicação = %.2f\n",resultado3);
		getch();
		break;	
	}
	
	case 'v' :
	{
		op1='v';
		break;
	}
	
	default: 
	{
		system("cls");
		printf("Opcao invalida\n");
		getch();
		break;
	}
	}	
		}while(op1!='v');
		break;
	}
			
	case 2:
	{
		do
		{
			system("cls");
			printf("SUBMENU TEMPERATURA\n");
			printf("1. Celsius para Fahrenheit \n");
			printf("2. Celsius para Kelvin\n");
			printf("3. Voltar ao menu principal\n\n");	
			printf("Digite a sua opcao: ");
			scanf("%d",&op2);
			
		switch(op2)
		{
			case 1: 
			{	
				system("cls");
				printf("Digite a temperatura em Celsius: ");
				scanf("%f",&tc);
				formula_c=(tc * 9/5) + 32;
				printf("Valor da temperatura em Fahrenheit = %.2f\n",formula_c);
				getch();
				break;
			}
		case 2:
		{
			system("cls");
			printf("Digite a temperatura em Celsius: ");
			scanf("%f",&tf);
			formula_f= tf + 273,15;
			printf("Valor da Temperatura em Kelvin = %.2f\n",formula_f);
			getch();
			break;	
		}
		
		case 3:
		{
			op2=3;
			break;		
		}
				
		default:
		{
			system("cls");
			printf("Opcao invalida\n");
			getch();
			break;	
		}
				}
			}while(op2!=3);
		break;
		}
			
		case 3:
		{
			op=3;
		    break;
		}	
		
		default:
		{
			system("cls");
			printf("Opcao invalida\n");
			getch();
			break;	
		}
		
			}
	}while(op!=3);
}
