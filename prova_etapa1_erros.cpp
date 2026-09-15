#include <stdio.h>

int main() {

    char nome[50];
    int idade;
    int a, b;
    float nota1, nota2, media;
    int numero;
    float salario;
    int opcao;
    float x, y, resultado;
    float altura, peso;

    // 1. Nome
    printf("Digite seu nome: ");
    scanf("%s", &nome); //faltou o &
    printf("Ola, %s!\n", nome); // foi trocado %d para o %s

    // 2. Idade
    printf("\nDigite sua idade: ");
    scanf("%d", &idade); //foi trocado %f para %d

    if (idade >= 18){  //faltou o {
        printf("Entrada permitida\n");
    }  //faltou o }
    else {  //faltou o {
        printf("Entrada nao permitida\n");
	}  //faltou o }
    // 3. Soma
    printf("\n Digite dois inteiros: ");
    scanf("%d %d", &a, &b); // foi separado com as aspas e virgula
    // printf("%d", &b); desnecessario
    printf("Soma = %d \n", a + b); // acrescentado +

    // 4. Maior numero
    printf("\nDigite dois inteiros: ");
    scanf("%d %d", &a, &b); 

    if (a > b){ //faltou o { e sinal ivertido
        printf("Maior = %d\n", a);
    } //faltou o }
    else{ //faltou o {
        printf("Maior = %d\n", b); 
	}  //faltou o }
    // 5. Media
    printf("\nDigite duas notas: ");
    scanf("%f %f", &nota1, &nota2);  

    media = (nota1 + nota2) / 2; //estava nota1 - nota2 modificado (nota1 + nota2) / 2

    if (media >= 7) { //faltou o {
        printf("Aprovado\n");
	} //faltou o }
    else { //faltou o {
        printf("Reprovado\n"); //faltou o ;
	} //faltou o }
    // 6. Positivo, negativo ou zero
    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    if (numero < 0){ //faltou o { e o sinal esta invertido, (errado >) (correto <)
        printf("Negativo\n");
    }  //faltou o }
    else if (numero > 0) { //faltou o { e o sinal esta invertido, (errado <) (correto >)
        printf("Positivo\n"); 
    } //faltou o }
    else { //faltou o {
        printf("Zero\n");
	} //faltou o }
    // 7. Par ou impar
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){ // Colocado { e corrigido o resto de par para 0
        printf("Par\n");
    } // Colocado }
    else{ // Colocado {
        printf("Impar\n");
    } // Colocado }

    // 8. Calculadora
    printf("\nDigite dois numeros: ");
    scanf("%f %f", &x, &y); 

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = x + y;
            break;
        case 2:
            resultado = x - y;
            break;
        case 3:
            resultado = x * y;
            break;
        case 4:
            resultado = x / y;
            break;
        default:
            printf("Opcao invalida\n");
    }

    printf("Resultado = %f\n", resultado); //resultado tem que ser float

    // 9. Salario (Desconto)
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);

    salario = salario - salario * 0.10;

    printf("Novo salario: %.2f\n", salario);

    // 10. Concurso
    printf("\nDigite seu nome: ");
    scanf("%s", &nome); //faltou &

    printf("Digite sua nota: ");
    scanf("%f", &nota1); // é %f

    if (nota1 >= 60){  // Colocado {
        printf("%s: aprovado\n", nome);
    } // Colocado }
	else {  // Colocado {
        printf("%s: reprovado\n", nome);
	}  // Colocado }
    // DESAFIO
    printf("\n===== RELATORIO =====\n");

    printf("Nome: ");
    scanf("%s", &nome); //Faltou & e trocar "%c" para "%s"

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%f", &altura); //Resultado "%f"

    printf("Peso: ");
    scanf("%f", &peso);  //Resultado "%f"


    printf("\n===== RELATORIO =====\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura);
    printf("Peso: %.2f kg\n", peso);

    return 0; // como completou o codigo return 0
}





