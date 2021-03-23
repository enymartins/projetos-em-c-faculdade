#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<math.h>

main(){
setlocale (LC_ALL, "");
	char nome[5][10];
	float nota1[5], nota2[5], media[5];
	int i;
	
	for(i=0; i < 5; i++){
		printf("Digite o nome do aluno %d: ", i + 1);
		scanf("%s", &nome[i]);
		printf("Digite a nota da Prova 1: ");
		scanf("%f", &nota1[i]);
		printf("Digite a nota da Prova 2: ");
		scanf("%f", &nota2[i]);
		media[i] = (nota1[i] + nota2[i])/2;
	}
	printf("\n");
	for(i=0; i < 5; i++){
		printf("O nome do aluno %d é: %s\n", i+1, nome[i]);
		printf("A nota da primeira prova foi: %2.f\n", nota1[i]);
		printf("A nota da segunda prova foi: %2.f\n", nota2[i]);
		printf("A média do aluno foi %2.f\n", media[i]);
	}
	
	return 0;
}
