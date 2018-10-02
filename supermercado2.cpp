#include <stdio.h>
#include <stdlib.h>

int main()
{
	float total,parcial,prod[100][3];
	int r,i,cont;
	cont=0;
	total=0;
	do
	{
		system("cls");
		printf("informe codigo do produto: ");
		scanf("%f",&prod[cont][0]);
		printf("informe quantidade do produto: ");
		scanf("%f",&prod[cont][1]);
		printf("informe preco do produto: ");
		scanf("%f",&prod[cont][2]);
		printf("Total do produto: R$ %0.2f \n",prod[cont][2]*prod[cont][1]);
		printf("\n\nDigite 1 para novo produto: ");
		scanf("%d",&r);
		cont++;
	} while (r==1);
	
	system("cls");
	printf("Relatorio de compras\n\n");
	printf("Codigo    Quantidade           Preco           Total\n");
			
	for (i=0;i<cont;i++)
	{
		parcial = prod[i][1]*prod[i][2];
		total = total + parcial;
		printf("%6.0f %13.0f %15.2f %15.2f\n",prod[i][0],prod[i][1],prod[i][2],parcial);
	}
	printf("Total: %45.2f\n",total);
	system("pause");
	return 0;
}
