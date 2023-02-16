#include <stdio.h>

 /* FUNÇÕES
 	METÓDO
	OPERAÇÃO
	COMPORTAMENTO
	SUBROTINA
	INTERFACE   */
	
	float Somar(float A, float B){ // parametros default 
	 float resultado;
	 resultado = A+B;
	 return(resultado); }
	 
	 void BoasVindas(char Quem[30]){
	 	printf("Bem vindo %s \n", Quem); //void não pode ter return
	}
	
	float Multiplicar(float x, float y){
		return (x*y);
	}
	
	float Dividir(float dividendo, float divisor){
	if(divisor == 0){
		return(0);
	} else
	 return dividendo/divisor; //os parenteses no return sao opcionais  
	 printf("Essa mensagem nunca sera apresentada ao usuario"); //returno abandona a função
	}
	
	int ImprimirMenu() {
		printf("\n Escolha o que deseja fazer: ");
		printf("\n 1. Somar");
		printf("\n 2. Subtrair ");
		printf("\n 3. Multiplicar");
		printf("\n 4. Dividir");
		printf("\n 5. Sair");
		printf("\n Digite a opcao desejada: ");
		int Resposta;
		scanf("%i", &Resposta);
		return(Resposta);
	}
	
 float Subtrair(float A, float B);

int main() {
	int opcao;
	char Nome[20];
	printf("Qual seu nome? ");
	scanf("%s", &Nome);
	BoasVindas(Nome);
	float num1, num2;
	printf("\n Digite um numero: ");
	scanf("%f", &num1);
	printf("\n Digite um segundo numero: ");
	scanf("%f", &num2);
	do {
	opcao = ImprimirMenu();
	switch (opcao) {
	case 1:
		printf("\n A soma entre %.1f e %.1f = %.1f \n", num1, num2, Somar(num1, num2));
		break;
	case 2:
		printf("\n A subtracao de %.1f e %.1f = %.1f \n", num1, num2, Subtrair(num1, num2));
		break;
	case 3:
		printf("\n A multiplicação de %.1f e %.1f = %.1f \n", num1, num2, Multiplicar(num1, num2));
		break;	
	case 4:
		printf("\n A divisão de %.1f e %.1f = %.1f \n", num1, num2, Dividir(num1, num2));
		break;
	case 5:
		printf("\n Obrigado por usar nosso software!");
	} // fecha switch case
} while (opcao <= 5 );
	 
}
