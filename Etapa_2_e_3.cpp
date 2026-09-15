# include <stdio.h>
//Etapa 2
float valor;
float res;
int op;
char nome[30];
int main(){
	printf("Valor da compra: ");
	scanf("%f", &valor);
	printf("Forma de pagamento (1 Credito / 2 Dinheiro ou pix)");
	scanf("%d", &op);
	switch (op){
		case 1:
			printf("Pagamento selecionado (A vista: Dinheiro ou pix)\n");
			res = valor - (valor * 0.05);
			break;
		case 2:
			printf("Pagamento selecionado (A vista: Credito)\n");
			break;
		default:
			printf("Opcao invalida, mantendo valor sem desconto extra.\n");
			break;
	}
	//Etapa 3
	printf("Insira seu nome: ");
	scanf("%s", &nome);
	if (op == 1 ){
		printf("Valor da compra é: %.2f", res);
	}
	else{
		printf("Valor da compra é: %.2f", valor);
	}
	return 0;
}

