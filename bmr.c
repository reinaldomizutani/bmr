#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float peso, altura, idade, fat, lbm, noPercent, percent;
	float pesmodh = 13.397, altmodh = 4.799, idademodh = 5.677;
	float pesmodm = 9.247, altmodm = 3.098, idademodm = 4.330;
	char sexo;
	system("cls");
	
	
	printf("Peso (kg):");
	scanf("%f", &peso);

	
	printf("Altura (cm):");
	scanf("%f", &altura);

	printf("idade:");
	scanf("%f", &idade);
	
	printf("porcentagerm de gordura corporal:");
	scanf("%f", &fat);

	
	while(sexo != 'm' && sexo != 'h'){
		printf("homem ou mulher? (h ou m)");
		scanf("%c", &sexo);
	}

	
	fat = fat/100;
	lbm = peso*(1-fat);
	
	
	
	percent = 370 + (21.6*lbm);
	
	printf("\n\n\n");
	if(sexo = 'h'){
		noPercent = (peso*pesmodh) + (altura*altmodh) - (idade*idademodh);
	}
	else{
		noPercent = (peso*pesmodm) + (altura*altmodm) - (idade*idademodm);
	}
	
	printf("A calculadora de BMR (Basal Metabolic Rate) calcula seu gasto calorico diario\n");
	printf("com base no protocolo de Harris-Benedict (revisado), e no protocolo de Katch-McArdle.\n");
	printf("Os dados fornecidos sao aproximacoes confiaveis do gasto calorico diario.\n");

	
	printf("\nLegenda para intensidade de atividade fisica:\n");
	printf("SEDENTARIO: Trabalho em escritorio, sentado, sem atividade fisica.\n");
	printf("POUCO ATIVO: Trabalho em pe sem grande esforço ou atividade fisica 1 a 3 vezes por semana.\n");
	printf("MEDIANAMENTE ATIVO: Trabalho em pe com medio esforço ou atividade fisica 3 a 5 vezes por semana.\n");
	printf("MUITO ATIVO: Trabalho cansativo (jardineiro, pedreiro) ou atividade fisica 6+vezes por semana.\n");
	printf("EXTREMO: Trabalho exaustivo (carteiro, boia-fria) ou atleta profissional.\n\n\n");
	printf("---------------------------------------------------------------------------------------------");
	printf("\nBMR sem porcentagem de gordura: %.0f Kcal por dia (Harris-Benedict) \n", noPercent);
	printf("BMR com porcentagem de gordura: %.0f Kcal por dia (Katch-McArdle)\n", percent);
	printf("---------------------------------------------------------------------------------------------");
	printf("\n\nGasto calorico por nivel de atividade fisica:\n\n");
	printf("\t\t\tmanutencao\tcutting\t\tbulking\n");
	printf("Sedentario: \t\t%.0f Kcal \t%.0f Kcal \t%.0f Kcal\n", percent*1.2, percent*1.2-500, percent*1.2+500);
	printf("Pouco Ativo: \t\t%.0f Kcal \t%.0f Kcal \t%.0f Kcal \t\n", percent*1.375, percent*1.375-500, percent*1.375+500);
	printf("Medianamente Ativo: \t%.0f Kcal \t%.0f Kcal \t%.0f Kcal \t\n", percent*1.55,percent*1.55-500, percent*1.55+500);
	printf("Muito Ativo: \t\t%.0f Kcal \t%.0f Kcal \t%.0f Kcal \t\n", percent*1.725, percent*1.725-500, percent*1.725+500);
	printf("Extremo: \t\t%.0f Kcal \t\%.0f Kcal \t%.0f Kcal", percent*1.9, percent*1.9-500, percent*1.9+500);

	printf("\n\n\n");
	
	return 0;
}