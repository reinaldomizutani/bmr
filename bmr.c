#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float peso, altura, idade, fat, lbm, noPercent, percent, temp;
	float pesmodh = 13.397, altmodh = 4.799, idademodh = 5.677;
	float pesmodm = 9.247, altmodm = 3.098, idademodm = 4.330;
	float carb, prot, gord;
	int tipoDieta, atividade;
	char sexo;
	system("cls");
	
	
	printf("Peso (kg):");
	scanf("%f", &peso);

	
	printf("Altura (cm):");
	scanf("%f", &altura);

	printf("idade:");
	scanf("%f", &idade);
	
	while(sexo != 'm' && sexo != 'h'){
		printf("homem ou mulher? (h ou m)");
		scanf("%c", &sexo);
	}
	
	printf("Qual o seu objetivo? (1 = ganho de massa, 2 = perder peso, 3 = manutencao/lean gains: ");
	scanf("%d", &tipoDieta);	
	
	printf("porcentagem de gordura corporal. ");
	printf("(para uma estimativa aproximada, procure body fat percent no google...):");
	scanf("%f", &fat);
	
	system("cls");
	
	printf("Qual seu nivel de atividade fisica?\n");
	printf("1) SEDENTARIO: Trabalho em escritorio, sentado, sem atividade fisica.\n");
	printf("2) POUCO ATIVO: Trabalho em pe sem grande esforco ou atividade fisica 1 a 3 vezes por semana.\n");
	printf("3) MEDIANAMENTE ATIVO: Trabalho em pe com medio esforco ou atividade fisica 3 a 5 vezes por semana.\n");
	printf("4) MUITO ATIVO: Trabalho cansativo (jardineiro, pedreiro) ou atividade fisica 6+vezes por semana.\n");
	printf("5) EXTREMO: Trabalho exaustivo (carteiro, boia-fria) ou atleta profissional.\nR:");
	scanf("%d", &atividade);	

	
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
	
	system("cls");
	
	printf("A calculadora de BMR (Basal Metabolic Rate) calcula seu gasto calorico diario\n");
	printf("com base no protocolo de Harris-Benedict (revisado), e no protocolo de Katch-McArdle.\n");
	printf("Os dados fornecidos sao aproximacoes confiaveis do gasto calorico diario.\n\n");
	


	printf("---------------------------------------------------------------------------------------------\n");
	printf("BMR sem porcentagem de gordura: %.0f Kcal por dia (Harris-Benedict) \n", noPercent);
	printf("BMR com porcentagem de gordura: %.0f Kcal por dia (Katch-McArdle)\n", percent);
	printf("---------------------------------------------------------------------------------------------\n\n");

	printf("---------------------------------------------------------------------------------------------\n");
	printf("Recomendacoes nutricionais genericas:\n");
	printf("---------------------------------------------------------------------------------------------\n");
	switch(atividade){
		case 1:
			if(tipoDieta == 1)
				printf("Valor diario de calorias: %.0f\n", percent*1.2+500);
			else if(tipoDieta == 2)
				printf("Valor diario de calorias: %.0f\n", percent*1.2-500);
			else
				printf("Valor diario de calorias: %.0f\n", percent*1.2);
			
			printf("\nDos quais:\n");
			if(tipoDieta == 1){
				temp = percent*1.2+500;
				printf("carboidrato: %.0f gramas\n", (temp*0.5)/4);
				printf("proteina: %.0f gramas\n", (temp*0.3)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.5)/4;
				prot = (temp*0.3)/4;
				gord = (temp*0.2)/9;
			}
			else if(tipoDieta == 2){
				temp = percent*1.2-500;
				printf("carboidrato: %.0f gramas\n", (temp*0.4)/4);
				printf("proteina: %.0f gramas\n", (temp*0.4)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb =  (temp*0.4)/4;
				prot = (temp*0.4)/4;
				gord = (temp*0.2)/9;
			}
			else{
				temp = percent*1.2;
				printf("carboidrato: %.0f gramas\n", (temp*0.45)/4);
				printf("proteina: %.0f gramas\n", (temp*0.35)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.35)/4;
				prot = (temp*0.45)/4;
				gord = (temp*0.2)/9;
			}
		break;
		case 2:
			if(tipoDieta == 1)
				printf("Valor diario de calorias: %.0f\n", percent*1.375+500);
			else if(tipoDieta == 2)
				printf("Valor diario de calorias: %.0f\n", percent*1.375-500);
			else
				printf("Valor diario de calorias: %.0f\n", percent*1.375);
		
			printf("\nDos quais:\n");
			if(tipoDieta == 1){
				temp = percent*1.375+500;
				printf("carboidrato: %.0f gramas\n", (temp*0.5)/4);
				printf("proteina: %.0f gramas\n", (temp*0.3)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.5)/4;
				prot = (temp*0.3)/4;
				gord = (temp*0.2)/9;
			}
			else if(tipoDieta == 2){
				temp = percent*1.375-500;
				printf("carboidrato: %.0f gramas\n", (temp*0.4)/4);
				printf("proteina: %.0f gramas\n", (temp*0.4)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.4)/4;
				prot = (temp*0.4)/4;
				gord = (temp*0.2)/9;
			}
			else{
				temp = percent*1.375;
				printf("carboidrato: %.0f gramas\n", (temp*0.45)/4);
				printf("proteina: %.0f gramas\n", (temp*0.35)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.35)/4;
				prot = (temp*0.45)/4;
				gord = (temp*0.2)/9;
			}
		break;
		case 3:
			if(tipoDieta == 1)
				printf("Valor diario de calorias: %.0f\n", percent*1.55+500);
			else if(tipoDieta == 2)
				printf("Valor diario de calorias: %.0f\n", percent*1.55-500);
			else
				printf("Valor diario de calorias: %.0f\n", percent*1.55);
			
			printf("\nDos quais:\n");
			if(tipoDieta == 1){
				temp = percent*1.55+500;
				printf("carboidrato: %.0f gramas\n", (temp*0.5)/4);
				printf("proteina: %.0f gramas\n", (temp*0.3)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.5)/4;
				prot = (temp*0.3)/4;
				gord = (temp*0.2)/9;
			}
			else if(tipoDieta == 2){
				temp = percent*1.55-500;
				printf("carboidrato: %.0f gramas\n", (temp*0.4)/4);
				printf("proteina: %.0f gramas\n", (temp*0.4)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.4)/4;
				prot = (temp*0.4)/4;
				gord = (temp*0.2)/9;
			}
			else{
				temp = percent*1.55;
				printf("carboidrato: %.0f gramas\n", (temp*0.45)/4);
				printf("proteina: %.0f gramas\n", (temp*0.35)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.35)/4;
				prot = (temp*0.45)/4;
				gord = (temp*0.2)/9;
			}
			
		break;
		case 4:
			if(tipoDieta == 1)
				printf("Valor diario de calorias: %.0f\n", (percent*1.725)+500);
			else if(tipoDieta == 2)
				printf("Valor diario de calorias: %.0f\n", (percent*1.725)-500);
			else
				printf("Valor diario de calorias: %.0f\n", percent*1.725);
			
			printf("\nDos quais:\n");
			if(tipoDieta == 1){
				temp = percent*1.725+500;
				printf("carboidrato: %.0f gramas\n", (temp*0.5)/4);
				printf("proteina: %.0f gramas\n", (temp*0.3)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.5)/4;
				prot = (temp*0.3)/4;
				gord = (temp*0.2)/9;
			}
			else if(tipoDieta == 2){
				temp = percent*1.725-500;
				printf("carboidrato: %.0f gramas\n", (temp*0.4)/4);
				printf("proteina: %.0f gramas\n", (temp*0.4)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.4)/4;
				prot = (temp*0.4)/4;
				gord = (temp*0.2)/9;
			}
			else{
				temp = percent*1.725;
				printf("carboidrato: %.0f gramas\n", (temp*0.45)/4);
				printf("proteina: %.0f gramas\n", (temp*0.35)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.35)/4;
				prot = (temp*0.45)/4;
				gord = (temp*0.2)/9;
			}
		break;
		case 5:
			if(tipoDieta == 1)
				printf("Valor diario de calorias: %.0f\n", percent*1.9+500);
			else if(tipoDieta == 2)
				printf("Valor diario de calorias: %.0f\n", percent*1.9-500);
			else
				printf("Valor diario de calorias: %.0f\n", percent*1.9);
			
			printf("\nDos quais:\n");
			if(tipoDieta == 1){
				temp = percent*1.9+500;
				printf("carboidrato: %.0f gramas\n", (temp*0.5)/4);
				printf("proteina: %.0f gramas\n", (temp*0.3)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.5)/4;
				prot = (temp*0.3)/4;
				gord = (temp*0.2)/9;
			}
			else if(tipoDieta == 2){
				temp = percent*1.9-500;
				printf("carboidrato: %.0f gramas\n", (temp*0.4)/4);
				printf("proteina: %.0f gramas\n", (temp*0.4)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.4)/4;
				prot = (temp*0.4)/4;
				gord = (temp*0.2)/9;
			}
			else{
				temp = percent*1.9;
				printf("carboidrato: %.0f gramas\n", (temp*0.45)/4);
				printf("proteina: %.0f gramas\n", (temp*0.35)/4);
				printf("gordura: %.0f gramas\n", (temp*0.2)/9);
				carb = (temp*0.35)/4;
				prot = (temp*0.45)/4;
				gord = (temp*0.2)/9;
			}
		break;
	}
	
	
	printf("---------------------------------------------------------------------------------------------\n");
	printf("tabela de conversao:\n");
	printf("CARBOIDRATOS: %.0fg Arroz    || %.0fg Batata(cozida) || %.0fg Batata doce(cozida) || %.0fg pao   || %.0fg macarrao\n", carb/0.2859, carb/0.2, carb/0.177, carb/0.5, carb/0.2354 );
	printf("PROTEINAS   : %.0fg patinho  || %.0fg peito de frango|| %.0fg Whey concentrado    || %.0fg lombo \n", prot/0.359, prot/0.32, prot/0.80, prot/0.28);
	printf("Gorduras    : %.0fg amendoim  || %.0fg azeite/oleo      || %.0fg  manteiga           || %.0fg amendoas \n", gord/0.52, gord, gord/0.81, gord/0.52);
	printf("---------------------------------------------------------------------------------------------\n\n");
	printf("nota: todo alimento possui diversos tipos de macronutrientes. Por exemplo, 100g de amendoim\n");
	printf("\t possui 52g de gorduras, 25g de proteinas e 16g de carboidratos, totalizando 567 Kcal. \n");
	printf("\t Tomar cuidado, especialmente se seu objetivo for perda de peso!\n");
	printf("\n\n\n");
	
	return 0;
}